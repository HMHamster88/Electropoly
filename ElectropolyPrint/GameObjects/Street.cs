using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media;

namespace ElectropolyPrint.GameObjects
{
    public class Street : Realty
    {
        public virtual SolidColorBrush Color
        {
            get
            {
                return Block.Color;
            }
        }

        public StreetBlock Block { get; private set; }
        public int[] Rent { get; private set; }

        public Street(string name, int cost, int mortgageCost, int unmortgageCost, int[] rent, StreetBlock block):
            base(name, cost, mortgageCost, unmortgageCost)
        {
            this.Rent = rent;
            this.Block = block;
            block.AddStreet(this);
        }
    }
}
