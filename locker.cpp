#include <bits/stdc++.h>

static int counter=0;

int check_locker(int num) {
  //Pass the first student. All lockers are open.
  std::vector<int> lockers(num,1);

  //Second student. Close the even locker(s).
  for(int i=1;i<=lockers.size();i++) {
    if(i%2==0) {
      lockers.at(i-1)=0;
    } else {
      ;;
    }
  }

  //Each n. student will check.
  for(int j=3; j<=lockers.size();j++) {
    for(int m=j; m<=lockers.size();m+=j) {
      if(lockers.at(m-1)==1) lockers.at(m-1)=0;
      else lockers.at(m-1) = 1;
    }
  }

  //Count 1's
  for(auto& c:lockers) {
    if(c==1) counter++;
    else ;; 
  }

  /*For debug purposes, if you want to print the locker's status, activate!

    for(auto& p:lockers) {
    std::cout << p << " ";
  }
  
  */

  return counter;
}

int main(int argc, char* argv[]) {
  //Get the amount of lockers from user.
  std::cout << "How many lockers does the school have?: ";
  int idx; std::cin>>idx;

  //Waiting..
  std::cout << "Evaluating..\n";
  std::this_thread::sleep_for(std::chrono::milliseconds(1000));

  //Send data into check_locker()
  std::cout << "There is/are " << check_locker(idx) << " open locker(s)." << std::endl;
  return 0;
}