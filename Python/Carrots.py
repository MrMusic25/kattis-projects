#!/usr/env/python
def main():
  #inputList = input()
  numContestants,numProblems=map(int,raw_input().split(' '))
  
  if (numContestants < 1) or (numProblems > 1000):
    exit(1)
  
  contestantDescriptions = [numContestants]
  for i in range(0,numContestants - 1):
    contestantDescriptions[i] = raw_input()
  
  print numProblems
  exit(0)

if __name__ == "__main__":
  main()