    #include <bits/stdc++.h>
  
    using namespace std ;
 
    inline void scanint(int &x)
    {
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
    }
 
 
   vector<int > primeArray;
 
    bool check[50009];
 
    int keep = 1;
 
 
    void initialise()
    {
        check[1 ] = 1;
        for(int i = 3 ; i <=224 ; i+=2){
            if(!check[i]){
                for(int j = i*i ; j<= 50000 ; j+=2*i)
                    check[j] = true;
            }
        }
        primeArray.pb(2);
        keep=1;
        for(int i = 3 ; i<= 50000 ; i++)
            if(check[i] == false && (i&1))
                primeArray.pb(i) , keep++;
    }
 
 
    bool segment[1000009];
 
 
 
    int main()
    {
        int t;
        s(t);
        initialise();
        while(t--)
        {
            int a , b;
            s(a),s(b);
 
            if(b <= 50000){
                if(a<=2)
                    printf("2\n");
                for(int i = a ; i<= b ; i++){
                    if(check[i] == false && (i&1))
                        printf("%d\n", i);
                }
                continue;
            }
 
            memset(segment , 0 , sizeof segment);
 
 
            for(int i = 0; primeArray[i]*primeArray[i] <= b ; i++)
            {
                int begin = a/primeArray[i];
                begin *= primeArray[i];
                for(int j = begin ; j<= b ; j+= primeArray[i]){
                    if(j < a)
                        continue;
                    segment[j - a] = true;
                }
            }
 
            for(int i  = 0 ; primeArray[i]*primeArray[i] <= b ; i++){
                if(primeArray[i]>= a && primeArray[i]<=b)
                    printf("%d\n",primeArray[i]);
            }
 
            for(int i = a==1?1:0 ; i < b-a+1 ; i++)
                if(segment[i]==0)
                    printf("%d\n", i+a);
        }
 
        return 0;
    } 
