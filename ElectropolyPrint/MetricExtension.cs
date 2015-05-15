using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Media;

namespace ElectropolyPrint
{
    public class MetricExtension : MarkupExtension
    {
        public double Value { get; set; }
        public MetricExtension()
        {
        }
        public MetricExtension(string strVal)
        {
            Value = double.Parse(strVal);
        }

        public override object ProvideValue(IServiceProvider serviceProvider)
        {
            try
            {
                var providerValuetarget = (IProvideValueTarget)serviceProvider
                    .GetService(typeof(IProvideValueTarget));
                
                var dpi = 96;
                try
                {
                    var dpiXProperty = typeof(SystemParameters).GetProperty("DpiX", BindingFlags.NonPublic | BindingFlags.Static);
                    dpi = (int)dpiXProperty.GetValue(null, null);
                }
                catch{}
                var dp = providerValuetarget.TargetProperty as DependencyProperty;
                var val = Value * (dpi / 25.4);
                if (dp.PropertyType == typeof(double))
                {
                    return val;
                }
                if (dp.PropertyType == typeof(Thickness))
                {
                    return new Thickness(val);
                }
                if (dp.PropertyType == typeof(GridLength))
                {
                    return new GridLength(val);
                }
                return null;
            }
            catch (Exception ex)
            {
                Debug.WriteLine(ex);
                return null;
            }
        }
    }
}
