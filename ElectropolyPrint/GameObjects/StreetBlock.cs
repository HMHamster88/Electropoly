using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media;

namespace ElectropolyPrint.GameObjects
{
    public class StreetBlock
    {
        public SolidColorBrush Color { get; private set; }

        List<Street> streets = new List<Street>();

        public IEnumerable<Street> Streets
        {
            get
            {
                return streets.ToArray();
            }
        }

        public void AddStreet(Street street)
        {
            streets.Add(street);
        }

        public StreetBlock(Color color)
        {
            this.Color = new SolidColorBrush(color);
        }
    }
}
