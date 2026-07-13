#include<iostream>
class Space
{
    int mCount;
    public:
        Space()
        {
            mCount=0;
        }
        Space(int count):mCount(count)
        { }
        Space operator ++()
        {
                mCount++;
                return  Space(mCount);
            }
};
int main()
{
    Space objSpace;
    return 0;
}