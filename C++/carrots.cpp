#include <iostream>
#include <string>
using namespace std;

int main()
{
   int numContestants, numProblems;

   //cout << "Please enter the number of contestants and number of problems: ";
   cin >> numContestants >> numProblems;
   if (numContestants < 1 || numProblems > 1000) return 1;

   string contestantDescriptions[numContestants];
   //cout << "Please enter a description for each contestant." << endl;
   for (int i = 0; i < numContestants; i++) {
      //cout << "Destription for contestant " << i << ": ";
      getline(cin,contestantDescriptions[i]);
   }

   cout /*<< "Number of carrots: "*/ << numProblems;
   return 0;
}
