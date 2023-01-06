#include <iostream>
using namespace std;
class Set
{
public:
    Set();
    void add(int x);
    int find(int x);
    void dele(int x);
    Set jiaoji(Set x);
    Set binji(Set x);
    Set chaji(Set x);
    void display();

private:
    int a[10];
    int n = 0;
};
Set::Set()
{
}
int Set::find(int x)
{
    int p = -1;
    int i;
    for (i = 0; i < n; i++)
        if (x == a[i])
        {
            p = i;
            break;
        }
    return p;
}
void Set::add(int x)
{
    if (find(x) == -1)
    {
        a[n] = x;
        n++;
    }
}
void Set::dele(int x)
{
    int i;
    int p;
    p = find(x);
    if (find(x) != -1)
        for (i = p; i < n - 1; i++)
            a[i] = a[i + 1];
    n--;
}
void Set::display()
{
    int i;
    cout << "{";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "}" << endl;
}
Set Set::jiaoji(Set x)
{
    Set s;
    int i;
    for (i = 0; i < n; i++)
    {
        if (x.find(a[i]) != -1)
            s.add(a[i]);
    }
    return s;
}
Set Set::binji(Set x)
{
    Set s;
    int i;
    for (i = 0; i < n; i++)
    {
        s.add(x.a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (x.find(a[i]) == -1)
            s.add(a[i]);
    }
    return s;
}
Set Set::chaji(Set x)
{
    Set s;
    int i;
    for (i = 0; i < n; i++)
    {
        s.add(x.a[i]);
    }
    for (i = 0; i < n; i++)
        if (x.find(a[i]) != -1)
        {
            s.dele(a[i]);
        }
    return s;
}
int main()
{
    Set s1, s2, s3, s4, s5;
    s1.add(17);
    s1.add(18);
    s1.add(19);
    s2.add(17);
    s2.add(18);
    s2.add(20);
    s1.display();
    s2.display();
    s3 = s1.jiaoji(s2);
    s3.display();
    s4 = s1.binji(s2);
    s4.display();
    s5 = s2.chaji(s1);
    s5.display();
    return 0;
}
