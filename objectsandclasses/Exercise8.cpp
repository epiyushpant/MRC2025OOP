/*create three objects and print i'm count 2 for second and so on.*/
#include<iostream>
using namespace std;
class Count
{
    private:
        int count;
    public:
        Count():count(0)
        { }
        Count(int c):count(c)
        {
            count++;
        }
        void inc_count()
        {
            count++;
        }
        int get_count()
        {
            return count;
        }
};
int main()
{
    Count c1,c2,c3;
    c1.inc_count();
    c2.inc_count();
    c2.inc_count();
    
    c3.inc_count();
    c3.inc_count();
    c3.inc_count();
    
    cout << "im count " << c1.get_count();
    cout << endl;
    cout << "im count " << c2.get_count();
    cout << endl;
    cout << "im count " << c3.get_count();
    cout << endl;
    return 0;
}