using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media;

namespace ElectropolyPrint.GameObjects
{
    public class GameBoard
    {
        public StreetBlock[] Blocks { get; private set; }
        public Street[] Streets { get; private set; }
        public Realty[] RailwayStantions { get; private set; }
        public Realty[] HCServices { get; private set; }
        public int IncomeTax { get; private set; }
        public int LuxuryTax { get; private set; }

        public GameBoard()
        {
            Blocks = new[] 
            {
                new StreetBlock(Colors.DarkSlateBlue),
                new StreetBlock(Colors.LightBlue),
                new StreetBlock(Colors.MediumVioletRed),
                new StreetBlock(Colors.Orange),
                new StreetBlock(Colors.Red),
                new StreetBlock(Colors.Yellow),
                new StreetBlock(Colors.LimeGreen),
                new StreetBlock(Colors.RoyalBlue),
            };
            Streets = new[]
            {
                new Street("Street 0", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[0]),
                new Street("Street 1", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[0]),
                new Street("Street 2", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[1]),
                new Street("Street 3", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[1]),
                new Street("Street 4", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[1]),
                new Street("Street 5", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[2]),
                new Street("Street 6", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[2]),
                new Street("Street 7", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[2]),
                new Street("Street 8", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[3]),
                new Street("Street 9", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[3]),
                new Street("Street 10", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[3]),
                new Street("Street 11", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[4]),
                new Street("Street 12", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[4]),
                new Street("Street 13", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[4]),
                new Street("Street 14", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[5]),
                new Street("Street 15", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[5]),
                new Street("Street 16", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[5]),
                new Street("Street 17", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[6]),
                new Street("Street 18", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[6]),
                new Street("Street 19", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[6]),
                new Street("Street 20", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[7]),
                new Street("Street 21", 60, 30, 70, new []{ 1, 2, 3, 4, 5, 6}, Blocks[7]),
            };
            RailwayStantions = new[]
            {
                new Realty("Railway 0", 200, 100, 250),
                new Realty("Railway 1", 200, 100, 250),
                new Realty("Railway 2", 200, 100, 250),
                new Realty("Railway 3", 200, 100, 250),
            };
            HCServices = new[]
            {
                new Realty("Electric company", 200, 100, 250),
                new Realty("Water works", 200, 100, 250),
            };
            IncomeTax = 200;
            LuxuryTax = 75;
        }
    }
}
