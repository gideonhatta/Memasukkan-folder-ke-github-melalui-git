int n;
int cekPrima(int p){

   if(p == 1){
      return 1;
   }else if(n%p==0){
      return 0;
   }else{
      return cekPrima(p-1);
   }
}