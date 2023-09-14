using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cesar
{
    internal class Program
    {
        static void Main(string[] args)
        {
		string alphabet = "abcdefghijklmnopqrstuvwxyz ";
		
		Console.Clear();
		System.Console.Write("input: ");
		string input = Console.ReadLine();
		System.Console.Write("offset: ");
		int offset = int.Parse(Console.ReadLine());
		Console.Clear();

		for(int i =0; i<input.Length;i++)
		{
			for(int j=0;j<alphabet.Length;j++)
			{
				if(input[i] == alphabet[j])
				{
					System.Console.Write(alphabet[(j+offset)%alphabet.Length]);
				}
			}
		}

		Console.ReadLine();
	             
        }
	

    }

}
