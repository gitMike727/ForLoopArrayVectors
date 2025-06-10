#include <iostream>

int main()
{
     int ids[] = {1,2,3,4,5};
     for (int i = 0; i <= 4; i++)
     {
        std::cout << ids[i] << std::endl;
     }

     //off by one problem
     for (int i = 0; i <= sizeof(ids)/sizeof(int); i++)
     {
        std::cout << ids[i] << std::endl;
     }

     //off by one problem fixed
     for (int i = 0; i < sizeof(ids)/sizeof(int); i++)
     {
        std::cout << ids[i] << std::endl;
     }

     //reverse order
     for (int i = sizeof(ids)/sizeof(int) - 1; i >= 0; i--)
     {
         std::cout << ids[i] << std::endl;
     }

     //the same as for (int i = 0; i < sizeof(ids)/sizeof(int); i++)
     for (int item : ids)
     {
      std::cout << item << std::endl;
     }

    return 0;
}