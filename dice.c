/* dice is a simple CLI die rolling program
 * Copyright 2010 Thomas Schreiber
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
   int randNum;
   int total = 0;
   int i = 0;

   if (argc != 3) {
      printf("Usage: dice <number of dice> <number of sides>\n");
      return 0;
   }

   int numDice = atoi(argv[1]);
   int sides = atoi(argv[2]);

   srand((unsigned)time(0));

   for (i=0; i< numDice; i++) {
      randNum = (rand() % sides) + 1;
      total = total + randNum;
      printf("d%d:\t%d\n", sides, randNum);
   }

   printf("Total:\t%d\n", total);

   return 0;
}
