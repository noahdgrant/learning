#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void FileReading() {
  string path = "practice1.txt";

  // method 1
  ifstream file;
  file.open(path);
  if (file.is_open()) {
    cout << "File successfully opened." << endl;
  } else {
    cout << "File failed to open." << endl;
  }

  file.close();

  // method 2 (prefered)
  // getline(file, buf, delimiter) - reads until newline or EOF
  // get(buf) - reads a single char
  // rdbuf() - reads the file without needing to create a variable (the file is
  // stored in memory when it's open)
  try { // try these actions
    ifstream file;
    string line;

    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open."); // throw error
    }

    while (getline(file, line)) {
      cout << line;
    }

    file.close();
  } catch (exception &e) { // catch error
    cerr << e.what() << endl;
  }

  // Double delimiter
  path = "student/text/names2.txt";
  vector<string> names;
  string last_name = "Smith";
  int count = 0;

  try {
    ifstream file;
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read)) {      // newline delimiter
      stringstream ss(read);           // create a string stream of read
      while (getline(ss, read, ' ')) { // white space delimiter
        names.push_back(read);
      }
    }
    file.close();
    for (int i = 0; i < names.size(); i++) {
      if (i % 2 == 1) {
        if (names.at(i) == last_name) {
          count++;
        }
      }
    }
    cout << "There are " << count << " people whose last name is Smith."
         << endl;
  }

  catch (exception &e) {
    cerr << e.what() << endl;
  }

  // Ignoring
  path = "student/text/readpractice.txt";

  try {
    ifstream file; // for reading a file
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    file.ignore(30); // ignore all chars before index 30
    while (getline(file, read)) {
      cout << read << endl;
    }
    file.close();
  }

  catch (exception &e) {
    cerr << e.what() << endl;
  }
}

void FileWriting() {
  string path = "practice1.txt";

  try {
    ofstream file;   // for writing to a file
    file.open(path); // file.open(path, ios::app) to open file in append mode
    if (!file) {
      throw runtime_error("File failed to open.");
    }

    file << "Hello there";
    file.close();
  } catch (exception &e) { // catch error
    cerr << e.what() << endl;
  }
}

void CSVFiles() {
  string path = "monty_python_movies.csv";

  try {
    ifstream file;
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read, ',')) {
      cout << read + ' ';
    }
    file.close();
  }

  catch (exception &e) {
    cerr << e.what() << endl;
  }
}

int main() {
  FileReading();
  return 0;
}
