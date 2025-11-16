#include <stdio.h>
#include <time.h>

void bin(unsigned int num,char zero[],char one[],char sep[]){
  for (int j=3;j>=0;j--){
    for(int i=j*4+3;i>j*4-1;i--){
      if ((num >> i) & 1){
        printf(one);
      }
      else {
        printf(zero);
      }
    }
    printf(sep);
  }
}
int main(int argc, char *argv[]){

  unsigned long long unixtime , bintime , oldbintime, oldtime;
  unsigned long since00,hrs,mins,secs,out;
    unixtime = time(0);
    since00 = unixtime%86400;
    bintime = (since00 << 16) / 86400;
      since00 = unixtime%86400;
      if (argc >= 4){
        bin(bintime,argv[1],argv[2],argv[3]);
      }
      else{
        bin(bintime,".","|"," ");
      }
      printf("\n");
      oldtime = time(0);
      oldbintime = (since00 << 16) / 86400;
  return 0;
}

