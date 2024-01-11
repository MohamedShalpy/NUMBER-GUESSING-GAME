#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));

      int num;
      const int MIN_VALUE = 1,MAX_VALUE = 100;

      num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;;

      int answer;
      cout<< "\n\t\t\t welcome to Guessing the Random Number Game\n";

      do {

            cout << "Enter your Guess between 1 and 100: ";

            cin >> answer;

            if (answer < num)

                  cout << "Your guess is too low" << endl;

            else if (answer > num)

                  cout << "Your guess is too high" << endl;

            else

                  cout << "Congratulations Your guess is right!" << endl;

      } while (answer != num);

      system("PAUSE");

      return 0;
}
