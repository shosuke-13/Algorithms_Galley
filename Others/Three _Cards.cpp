# include <iostream>

using namespace std;

int main(){
    /*
    3枚のカードが存在し、各カードに1以上N以下の整数を描く必要がある
    ３枚のカードの合計をKにするような書き方はなん通りあるか

    [input format]
    N K

    [output format]
    print answer (int)
    */

   int N, K;
   int count = 0;

   // input
   cin >> N >> K;

   // Linear search
   for (int x = 1; x <= N; x++){
       for (int y = 1; y <= N; y++){
           for (int z = 1; z <= N; z++){
               if ((x + y + z) == K){
                    count++;
                }
        }
    }

    // output result
    cout << count << endl;
    return 0;
   }


}