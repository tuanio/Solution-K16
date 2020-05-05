#include <bits/stdc++.h>

using namespace std;

#define toi(c) c - '0'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string digit[11][29] = {
    {"+---+","|   |","|   |","+   +","|   |","|   |","+---+"},
    {"    +","    |","    |","    +","    |","    |","    +"},
    {"+---+","    |","    |","+---+","|    ","|    ","+---+"},
    {"+---+","    |","    |","+---+","    |","    |","+---+"},
    {"+   +","|   |","|   |","+---+","    |","    |","    +"},
    {"+---+","|    ","|    ","+---+","    |","    |","+---+"},
    {"+---+","|    ","|    ","+---+","|   |","|   |","+---+"},
    {"+---+","    |","    |","    +","    |","    |","    +"},
    {"+---+","|   |","|   |","+---+","|   |","|   |","+---+"},
    {"+---+","|   |","|   |","+---+","    |","    |","+---+"},
    {"     ","     ","  o  ","     ","  o  ","     ","     "}
  };
  string s;
  while (getline(cin, s) && s != "end") {
    vector<string> ans;
    for (int i = 0; i < 7; i++)
      ans.push_back(digit[toi(s[0])][i] + "  " + digit[toi(s[1])][i] + digit[10][i] + digit[toi(s[3])][i] + "  " + digit[toi(s[4])][i]);
    for (string t : ans) cout << t << '\n';
    cout << "\n\n";
  }
  cout << "end\n";
  return 0;
}
