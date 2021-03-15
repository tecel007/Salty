using System;
using System.IO;
using System.Threading;
using System.Collections.Generic;
using System.Linq;

namespace process
{
    class Program
    {
        static void Main(string[] args)
        {
            var input = File.ReadAllLines("C:\\Users\\tecel\\AppData\\Roaming\\Salty\\Salty.csv");

            var count = new Dictionary<string, int>();

            foreach (var line in input)
            {
                var t = line.Split("\",".ToCharArray(), StringSplitOptions.RemoveEmptyEntries).ToList();

                if(t.Count > 3 && t[1] == "NATIVE")
                {
                    if(!count.ContainsKey(t[3]))
                    {
                        count[t[3]] = 1;
                    }
                    count[t[3]]++;
                }
            }
            var output = new List<string>();

            foreach (var key in count.Keys)
            {
                output.Add(key + "," + count[key].ToString());
            }
            File.WriteAllLines("C:\\Users\\tecel\\AppData\\Roaming\\Salty\\Salty_processed.csv", output);
        }
    }
}
