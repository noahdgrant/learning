#include <iostream>
using namespace std;

// An object is an instance of a class

// Class names are CapitalCamelCase
class ActorV1 {
public:
  string first_name; // first_name is an attribute of the Actor class
  string last_name;
  string birthday;
  int total_films;
  int oscar_nominations;
  int oscar_wins;
};

class ActorV2 {
public:
  string first_name;
  string last_name;
  string birthday;
  int total_films;
  int oscar_nominations;
  int oscar_wins;

  // Constructor
  ActorV2() {
    first_name = "Helen";
    last_name = "Mirren";
    birthday = "July 26";
    total_films = 80;
    oscar_nominations = 4;
    oscar_wins = 1;
  }
};

class ActorV3 {
public:
  string first_name;
  string last_name;
  string birthday;
  int total_films;
  int oscar_nominations;
  int oscar_wins;

  ActorV3(string fn, string ln, string bd, int tf, int on, int ow) {
    first_name = fn;
    last_name = ln;
    birthday = bd;
    total_films = tf;
    oscar_nominations = on;
    oscar_wins = ow;
  }
};

class ActorWithDefault {
public:
  string first_name;
  string last_name;
  string birthday;
  int total_films;
  int oscar_nominations;
  int oscar_wins;

  ActorWithDefault(string fn, string ln, string bd, int tf) {
    first_name = fn;
    last_name = ln;
    birthday = bd;
    total_films = tf;
    oscar_nominations = 0;
    oscar_wins = 0;
  }
};

int main() {
  ActorV1 john;
  john.first_name = "John";
  john.last_name = "Smith";
  john.birthday = "July 26";
  john.total_films = 80;
  john.oscar_nominations = 4;
  john.oscar_wins = 1;
  cout << john.first_name + " " + john.last_name << endl;

  ActorV2 helen;
  cout << helen.first_name + " " + helen.last_name << endl;

  ActorV3 tom("Tom", "Hanks", "July 9", 76, 5, 2);
  cout << tom.first_name + " " + tom.last_name << endl;

  return 0;
}
