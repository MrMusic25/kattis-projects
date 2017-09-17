#!/usr/env/python
def main():
  r1,s=map(int,raw_input().split(' '))
  
  if (r1 < -1000) or (r1 > 1000):
    exit(1)
  if (s < -1000) or (s > 1000):
    exit(1)
  
  out = (2*s)-r1
  print out

if __name__ == "__main__":
  main()