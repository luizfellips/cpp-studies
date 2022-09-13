#include <iostream>
#include <cmath>

double calcRoot1(const int a, const int b, const int c);
double calcRoot2(const int a, const int b, const int c);
int findXVertex(const int a, const int b);
int findYVertex(const int a, const int b, const int c);

int main(){
    int x;
    int y;
    int z;
    double root1;
    double root2;
    int xVertex;
    int yVertex;
    std::cout << "f(x) = x^2 + yx + z " << "\n";
    std::cout << "Insert the value of X: " && std::cin >> x;
    std::cout << "Insert the value of Y: " && std::cin >> y;
    std::cout << "Insert the value of Z: " && std::cin >> z;
    root1 = calcRoot1(x,y,z);
    if(root1 != -1){
        root2 = calcRoot2(x,y,z);
        xVertex = findXVertex(x,y);
        yVertex = findYVertex(x,y,z);
        std::cout << "1st root = " << root1 << "\n" << "2nd root = " << root2 << std::endl;
        std::cout << "Vertex of X = " << xVertex << "\n" << "Vertex of Y = " << yVertex;
    }
    return 0;
};

double calcRoot1(const int a, const int b, const int c){
    int d;
    d = pow(b,2) - 4*a*c;
    if (d < 0){
        std::cout << "There are no real roots for this equation.";
        return -1;
    }
    if(d >= 0){
        return (-b+sqrt(d))/2*a;
    }
};

double calcRoot2(const int a, const int b, const int c){
    int d;
    d = pow(b,2) - 4*a*c;
    return (-b-sqrt(d))/2*a;
};

int findXVertex(const int a, const int b){
    return -b/2*a;
};

int findYVertex(const int a, const int b, const int c){
    int d;
    d = pow(b,2) - 4*a*c;
    return -d/4*a;
};
