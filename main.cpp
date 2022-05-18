//#include <iostream>
//#include <math.h>
//using namespace std;
//
////Sinh viên viết code vào đây
//
//struct Point{
//    Point(){};
//    Point(int x, int y) : x(x), y(y){};
//    int x, y;
//};
//
//class Triangle{
// public:
//    Point p1,p2,p3;
//    Triangle(Point p1, Point p2, Point p3){
//        this->p1.x = p1.x;
//        this->p1.y = p1.y;
//        this->p2.x = p2.x;
//        this->p2.y = p2.y;
//        this->p3.x = p3.x;
//        this->p3.y = p3.y;
//    }
//    double sumDistance(Point p){
//        double d1 = 0, d2 = 0, d3 = 0;
//        d1 = sqrt((p.x - p1.x) * (p.x - p1.x) + (p.y - p1.y) * (p.y - p1.y));
//        d2 = sqrt((p.x - p2.x) * (p.x - p2.x) + (p.y - p2.y) * (p.y - p2.y));
//        d3 = sqrt((p.x - p3.x) * (p.x - p3.x) + (p.y - p3.y) * (p.y - p3.y));
//        return d1 + d2 + d3;
//    }
//};
//
//
//int main(){
//    // CHÚ Ý: Sinh viên không được thay đổi nội dung hàm main
//    // Chương trình thay đổi hàm main sẽ không được tính điểm dù đúng tất cả các test
//    int x1, y1, x2, y2, x3, y3, x, y;
//    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y;
//
//    Point p1(x1, y1);
//    Point p2(x2, y2);
//    Point p3(x3, y3);
//    Triangle t(p1, p2, p3);
//
//    Point p(x,y);
//
//    cout << t.sumDistance(p) << endl;
//
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//    string path;
//    cin >> path;
//    ifstream file(path);
//    while(file && !file.eof()) {
//        int n;
//        file >> n;
//        file.ignore();
//        while(n--) {
//            int cnt = 0;
//            string s;
//            getline(file, s);
//            stringstream ss(s);
//            while (ss >> s) {
//                if (s.size() < 2)
//                    continue;
//                else {
//                    if (s[0] >= 'A' && s[0] <= 'Z')
//                        cnt++;
//                }
//            }
//            cout << cnt << '\n';
//        }
//    }
//    return 0;
//}

//struct Time {
//    // your code goes here
//    // Cac bien thanh vien
//
//    int h,m,s;
//
//    // your code goes here
//    // Hai ham khoi tao
//
//    Time(): h(0), m(0), s(0) {}
//    Time(int h, int m, int s): h(h), m(m), s(s) {}
//
//    int second() {
//        // your code goes here
//        return s + m * 60 + h * 3600;
//    }
//
//    void print() {
//        if(h < 10) cout << 0;
//        cout << h << ":";
//        if(m < 10) cout << 0;
//        cout << m << ":";
//        if(s < 10) cout << 0;
//        cout << s << '\n';
//        // your code goes here
//    }
//};
//
//Time normalize(int h, int m, int s) {
//    // your code goes here
//    if(s >= 60) {
//        m += s/60;
//        s %= 60;
//    }
//
//    if(m >= 60) {
//        h += m/60;
//        m %= 60;
//    }
//
//    Time time(h, m, s);
//    return time;
//}

//void printLast(Node* head, int k) {
//    int size = 1;
//    if (head){
//        Node* nextNode = head->next;
//        while(nextNode) {
//            size++;
//            nextNode = nextNode->next;
//        }
//
//        nextNode = head;
//        for(int i = 0; i < size; i++) {
//            if(i >= size - k) {
//                cout << nextNode->value << ' ';
//            }
//            nextNode = nextNode->next;
//        }
//    }
//}
