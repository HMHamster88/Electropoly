using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media;

namespace ElectropolyPrint.GameObjects
{
    public class Realty
    {
        public virtual SolidColorBrush Color
        {
            get
            {
                return new SolidColorBrush(Colors.White);
            }
        }

        public string Name { get; private set; }
        public int Cost { get; private set; }
        public int MortgageCost { get; private set; }
        public int UnmortgageCost { get; private set; }

        public Realty(string name, int cost, int mortgageCost, int unmortgageCost)
        {
            Cost = cost;
            MortgageCost = mortgageCost;
            UnmortgageCost = unmortgageCost;
            Name = name;
        }
    }
}
