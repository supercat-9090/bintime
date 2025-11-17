# Bintime - get binary time
True binary time clock written in C.
## Compiling
Use `cc`
```bash
git clone https://github.com/supercat-9090/bintime
cd bintime
cc main.c -o bintime
```
## Usage
Bintime, by default uses | for ones and . for zeros. It also separates each 4 bits with a space
To change that, run
```bash 
bintime [zero] [one] [seperator]```

## Reading
This binary clock represents the time of the day in fractions of the day, so the first bit is 12hrs, the second is 6hrs, the third is 3hrs, and so on. So `1010 0000 0000 0000` will be 12hrs + 3hrs = 15:00
