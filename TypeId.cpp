  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
      auto x = 4;
    auto y = 3.37;
      auto z = 3.37f;
      auto c = 'a';
    auto ptr = &x;
      auto pptr = &ptr;
    cout << typeid(x).name() << nl
         << typeid(y).name() << nl
         << typeid(z).name() << nl
         << typeid(c).name() << nl
         << typeid(ptr).name() << nl
           << typeid(pptr).name() << nl;

    return 0;

  }

