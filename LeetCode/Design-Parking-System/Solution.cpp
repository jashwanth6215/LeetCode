1class ParkingSystem {
2public:
3    map<int,int>m;
4    ParkingSystem(int big, int medium, int small) {
5        m[1]=big;
6        m[2]=medium;
7        m[3]=small;
8    }
9    
10    bool addCar(int carType) {
11        if(m[carType]>0)
12        {
13            m[carType]--;
14            return true;
15        }
16        return false;
17    }
18};
19
20/**
21 * Your ParkingSystem object will be instantiated and called as such:
22 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
23 * bool param_1 = obj->addCar(carType);
24 */
25