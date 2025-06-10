#include <iostream>
#include <vector>


int main()
{
   //raw array
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
     //                std::cout << ids[i] << std::endl;
     //down side of this is the index is not there
     //this is a  for each
     for (int item : ids)
     {
      std::cout << item << std::endl;
     }

     //smarter array
     //vector type gives an error of by a single problem
     std::vector<int> idsVec = { 1,2,3,4,5,6 };
     for (int i = 0; i < idsVec.size(); i++)
     {
      std::cout << idsVec[i] << std::endl;
     }

     for (int item : idsVec)
     {
      std::cout << item << std::endl;
     }

     std::cout << "********************************" << std::endl;

     //iterator for loop *Advanced*. iterator is like an agent to loop through the vector
     for (std::vector<int>::iterator itr = idsVec.begin(); itr != idsVec.end(); itr++)
     {
      std::cout << *itr << std::endl;
     }



    return 0;
}