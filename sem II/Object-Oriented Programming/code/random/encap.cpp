#include <iostream>
using namespace std;


class secretData{
    private:
        string mission;
        int code;
        int secret;
        public:
       string setmission(string m){
            mission = m;
        }
        void setcode(int c){
            code = c;
        }
       void  setsecret(int s){
            secret = s;
        }
        string getmission(){
            return mission;
        }
        int getcode(){
            return code;
        }
        int getsecret(){
            return secret;
        }
        void display(){
            cout << "Mission: " << mission << endl;
            cout << "Code: " << code << endl;
            cout << "Secret: " << secret << endl;
        }
};
int main(){
    secretData sd;
    sd.setmission("Top Secret");
    sd.setcode(12345);
    sd.setsecret(67890);
    sd.display();
    return 0;
}
