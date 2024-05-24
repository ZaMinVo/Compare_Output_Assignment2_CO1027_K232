#include "study_in_pink2.h"
// ---------------------------------------------------PATH---------------------------------------------------------

// Khai báo tĩnh (Path path) -> in ra getType()
void tc_1001() {
    cout << "----- Testcase 01 -----" << endl;
    Path path = Path();
    cout << path.getType();
}

// Khai báo động Path * path = new Path() -> in ra getType()
void tc_1002() {
    cout << "----- Testcase 02 -----" << endl;
    Path *path = new Path();
    cout << path->getType();
    delete path;
}

// Khai báo động sử dụng con trỏ parent MapElement -> in ra getType()
void tc_1003() {
    cout << "----- Testcase 03 -----" << endl;
    MapElement *path = new Path();
    cout << path->getType();
    delete path;
}

// ---------------------------------------------------WALL---------------------------------------------------------


// Khai báo tĩnh (Wall wall) -> in ra getType()
void tc_1004() {
    cout << "----- Testcase 04 -----" << endl;
    Wall wall = Wall();
    cout << wall.getType();
}

// Khai báo động Wall * wall = new Wall() -> in ra getType()
void tc_1005() {
    cout << "----- Testcase 05 -----" << endl;
    Wall *wall = new Wall();
    cout << wall->getType();
    delete wall;
}

// Khai báo động sử dụng con trỏ parent MapElement -> in ra getType()
void tc_1006() {
    cout << "----- Testcase 06 -----" << endl;
    MapElement *wall = new Wall();
    cout << wall->getType();
    delete wall;
}

// ---------------------------------------------------FAKEWALL---------------------------------------------------------

// Khai báo tĩnh (FakeWall fakewall) -> in ra getType()
void tc_1007() {
    cout << "----- Testcase 07 -----" << endl;
    FakeWall fakewall = FakeWall(100);
    cout << fakewall.getType();
}

// Khai báo tĩnh (FakeWall fakewall) -> in ra getReqExp()
void tc_1008() {
    cout << "----- Testcase 08 -----" << endl;
    FakeWall fakewall = FakeWall(100);
    cout << fakewall.getReqExp();
}

// Khai báo động FakeWall * fakewall = new FakeWall()  -> in ra getType()
void tc_1009() {
    cout << "----- Testcase 09 -----" << endl;
    FakeWall *fakewall = new FakeWall(100);
    cout << fakewall->getType();
    delete fakewall;
}

// Khai báo động FakeWall * fakewall = new FakeWall()  -> in ra getReqExp()
void tc_1010() {
    cout << "----- Testcase 10 -----" << endl;
    FakeWall *fakewall = new FakeWall(100);
    cout << fakewall->getReqExp();
    delete fakewall;
}

// Khai báo động sử dụng con trỏ parent MapElement -> in ra getType()
void tc_1011() {
    cout << "----- Testcase 11 -----" << endl;
    MapElement *fakewall = new FakeWall(100);
    cout << fakewall->getType();
    delete fakewall;
}

// ---------------------------------------------------MAP---------------------------------------------------------

//  Không dùng class TestStudyInPink
// Khai báo tĩnh
void tc_1012() {
    cout << "----- Testcase 12 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(6, 0)};
    Map map = Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// Khai báo tĩnh
void tc_1013() {
    cout << "----- Testcase 13 -----" << endl;
    int num_walls = 5;
    Position arr_walls[] = {Position(1, 1), Position(2, 2), Position(5, 5), Position(4, 4), Position(3,3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(0, 5)};
    Map map = Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// Khai báo thông qua cấp phát động new
// không delete trên con trỏ

// num_rows == num_cols
void tc_1014() {
    cout << "----- Testcase 14 -----" << endl;
    int num_walls = 2;
    Position arr_walls[] = {Position(2, 3), Position(3, 0)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(2, 4)};
    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows == num_cols
void tc_1015() {
    cout << "----- Testcase 15 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(2, 4), Position(2, 3), Position(3, 1)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(1, 1)};
    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows > num_cols
void tc_1016() {
    cout << "----- Testcase 16 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(3, 3)};
    Map * map = new Map(7, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows > num_cols
void tc_1017() {
    cout << "----- Testcase 17 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(4, 0)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(0, 0)};
    Map * map = new Map(6, 2, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows < num_cols
void tc_1018() {
    cout << "----- Testcase 18 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(2, 2), Position(2, 1), Position(1, 1)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(0, 0)};
    Map * map = new Map(3, 4, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows < num_cols
void tc_1019() {
    cout << "----- Testcase 19 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};
    Map * map = new Map(4, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_walls == 0
void tc_1020() {
    cout << "----- Testcase 20 -----" << endl;
    int num_walls = 0;
    Position arr_walls[] = {};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_walls == 1
void tc_1021() {
    cout << "----- Testcase 21 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(0, 0)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_walls > 1
void tc_1022() {
    cout << "----- Testcase 22 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(0, 0), Position(1, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_walls > 1
void tc_1023() {
    cout << "----- Testcase 23 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 9), Position(9, 2), Position(3, 4), Position(4, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_fake_walls == 0
void tc_1024() {
    cout << "----- Testcase 24 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 0;
    Position arr_fake_walls[] = {};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_fake_walls == 1
void tc_1025() {
    cout << "----- Testcase 25 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_fake_walls > 1
void tc_1026() {
    cout << "----- Testcase 26 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(1, 1)};
    int num_fake_walls = 4;
    Position arr_fake_walls[] = {Position(0, 0), Position(2, 3), Position(5, 4), Position(9,9)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_fake_walls > 1
void tc_1027() {
    cout << "----- Testcase 27 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(0, 0), Position(2, 6)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// delete trên con trỏ

// num_rows == num_cols
void tc_1028() {
    cout << "----- Testcase 28 -----" << endl;
    int num_walls = 2;
    Position arr_walls[] = {Position(2, 3), Position(3, 0)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(2, 4)};
    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_rows == num_cols
void tc_1029() {
    cout << "----- Testcase 29 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(2, 4), Position(2, 3), Position(3, 1)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(1, 1)};
    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_rows > num_cols
void tc_1030() {
    cout << "----- Testcase 30 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(3, 3)};
    Map * map = new Map(7, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_rows > num_cols
void tc_1031() {
    cout << "----- Testcase 31 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(4, 0)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(0, 0)};
    Map * map = new Map(6, 2, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_rows < num_cols
void tc_1032() {
    cout << "----- Testcase 32 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(2, 2), Position(2, 1), Position(1, 1)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(0, 0)};
    Map * map = new Map(3, 4, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_rows < num_cols
void tc_1033() {
    cout << "----- Testcase 33 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};
    Map * map = new Map(4, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_walls == 0
void tc_1034() {
    cout << "----- Testcase 34 -----" << endl;
    int num_walls = 0;
    Position arr_walls[] = {};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_walls == 1
void tc_1035() {
    cout << "----- Testcase 35 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(0, 0)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_walls > 1
void tc_1036() {
    cout << "----- Testcase 36 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(0, 0), Position(1, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_walls > 1
void tc_1037() {
    cout << "----- Testcase 37 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 9), Position(9, 2), Position(3, 4), Position(4, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_fake_walls == 0
void tc_1038() {
    cout << "----- Testcase 38 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 0;
    Position arr_fake_walls[] = {};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_fake_walls == 1
void tc_1039() {
    cout << "----- Testcase 39 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_fake_walls > 1
void tc_1040() {
    cout << "----- Testcase 40 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(1, 1)};
    int num_fake_walls = 4;
    Position arr_fake_walls[] = {Position(0, 0), Position(2, 3), Position(5, 4), Position(9,9)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// num_fake_walls > 1
void tc_1041() {
    cout << "----- Testcase 41 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(0, 0), Position(2, 6)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    delete map;
}

// ---------------------------------------------------POSITION---------------------------------------------------------
// Không dùng class TestStudyInPink

// "Position ( int r =0 , int c =0) dùng cả 2 default param"
void tc_1054() {
    cout << "----- Testcase 54 -----" << endl;
    Position pos = Position();
    cout << pos.str();
}

// "Position ( int r =0 , int c =0) dùng 1 default param"
void tc_1055() {
    cout << "----- Testcase 55 -----" << endl;
    Position pos = Position(1);
    cout << pos.str();
}

// "Position ( int r =0 , int c =0) truyền cả 2 param"
void tc_1056() {
    cout << "----- Testcase 56 -----" << endl;
    Position pos = Position(1, 3);
    cout << pos.str();
}

// Position ( const string & str_pos ) ;
// r = 0, c = 0
void tc_1057() {
    cout << "----- Testcase 57 -----" << endl;
    Position pos = Position("(0, 0)");
    cout << pos.str();
}

// r > 0, c > 0
void tc_1058() {
    cout << "----- Testcase 58 -----" << endl;
    Position pos = Position("(1, 2)");
    cout << pos.str();
}

// r > 0, c < 0
void tc_1059() {
    cout << "----- Testcase 59 -----" << endl;
    Position pos = Position("(1, -1)");
    cout << pos.str();
}

// r < 0, c > 0
void tc_1060() {
    cout << "----- Testcase 60 -----" << endl;
    Position pos = Position("(-2, 3)");
    cout << pos.str();
}

// r < 0, c < 0
void tc_1061() {
    cout << "----- Testcase 61 -----" << endl;
    Position pos = Position("(-2, -4)");
    cout << pos.str();
}


// int getRow () const ;
void tc_1062() {
    cout << "----- Testcase 62 -----" << endl;
    Position pos = Position("(3, 5)");
    cout << pos.getRow();
}

// int getRow () const ;
void tc_1063() {
    cout << "----- Testcase 63 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.getRow();
}

// int getCol () const 
void tc_1064() {
    cout << "----- Testcase 64 -----" << endl;
    Position pos = Position("(3, 5)");
    cout << pos.getCol();
}

// int getCol () const 
void tc_1065() {
    cout << "----- Testcase 65 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.getCol();
}

// void setRow (int r)
void tc_1066() {
    cout << "----- Testcase 66 -----" << endl;
    Position pos = Position("(3, 5)");
    pos.setRow(5);
    cout << pos.str();
}

// void setRow (int r)
void tc_1067() {
    cout << "----- Testcase 67 -----" << endl;
    Position pos = Position(2, 4);
    pos.setRow(3);
    cout << pos.str();
}

// void setCol (int c)
void tc_1068() {
    cout << "----- Testcase 68 -----" << endl;
    Position pos = Position("(3, 5)");
    pos.setCol(1);
    cout << pos.str();
}

// void setCol (int c)
void tc_1069() {
    cout << "----- Testcase 69 -----" << endl;
    Position pos = Position(2, 4);
    pos.setCol(1);
    cout << pos.str();
}

// bool isEqual (int in_r , int in_c ) const
// trùng nhau
void tc_1070() {
    cout << "----- Testcase 70 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.isEqual(2, 4);
}

// khác nhau về r
void tc_1071() {
    cout << "----- Testcase 71 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.isEqual(4, 4);
}

// khác nhau về c
void tc_1072() {
    cout << "----- Testcase 72 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.isEqual(2, 5);
}

// khác nhau về r và khác nhau về c
void tc_1073() {
    cout << "----- Testcase 73 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.isEqual(4, 5);
}


// ---------------------------------------------------SHERLOCK---------------------------------------------------------
// Không dùng class TestStudyInPink
// "Constructor + getNextPosition"

// moving rule có bước đi đầu tiên đến ô Path
void tc_1094() {
    cout << "----- Testcase 94 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(1, 2), map, 100, 250);
    cout << sherlock->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1095() {
    cout << "----- Testcase 95 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(2, 1), map, 100, 250);
    cout << sherlock->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1096() {
    cout << "----- Testcase 96 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(3, 2), map, 100, 250);
    cout << sherlock->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1097() {
    cout << "----- Testcase 97 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(4, 1), map, 100, 250);
    cout << sherlock->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1098() {
    cout << "----- Testcase 98 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(1, 4), map, 100, 250);
    cout << sherlock->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
}




//"Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1099() {
    cout << "----- Testcase 99 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(1, 2), map, 100, 250);
    sherlock->move();
    cout << sherlock->str();

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1100() {
    cout << "----- Testcase 100 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(2, 1), map, 100, 250);
    sherlock->move();
    cout << sherlock->str();

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1101() {
    cout << "----- Testcase 101 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(3, 2), map, 100, 250);
    sherlock->move();
    cout << sherlock->str();

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1102() {
    cout << "----- Testcase 102 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(4, 1), map, 100, 250);
    sherlock->move();
    cout << sherlock->str();

    delete map;
    delete sherlock;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1103() {
    cout << "----- Testcase 103 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(1, 4), map, 100, 250);
    sherlock->move();
    cout << sherlock->str();

    delete map;
    delete sherlock;
}


// Không dùng class TestStudyInPink
// "Constructor + str"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1109() {
    cout << "----- Testcase 109 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(1, 2), map, 100, 250);
    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1110() {
    cout << "----- Testcase 110 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(2, 1), map, 100, 250);
    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1111() {
    cout << "----- Testcase 111 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(3, 2), map, 100, 250);
    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1112() {
    cout << "----- Testcase 112 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(4, 1), map, 100, 250);
    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1113() {
    cout << "----- Testcase 113 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(1, 4), map, 100, 250);
    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
}









// ---------------------------------------------------WATSON---------------------------------------------------------
// Không dùng class TestStudyInPink
// "Constructor + getNextPosition"

// moving rule có bước đi đầu tiên đến ô Path
void tc_1114() {
    cout << "----- Testcase 114 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(0, 1), map, 100, 250);
    cout << watson->getNextPosition().str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1115() {
    cout << "----- Testcase 115 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
    cout << watson->getNextPosition().str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và có thể đến được
void tc_1116() {
    cout << "----- Testcase 116 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "DR", Position(3, 2), map, 100, 500);
    cout << watson->getNextPosition().str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và không thể đến được
void tc_1117() {
    cout << "----- Testcase 117 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "DR", Position(0, 2), map, 100, 500);
    cout << watson->getNextPosition().str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1118() {
    cout << "----- Testcase 118 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
    cout << watson->getNextPosition().str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1119() {
    cout << "----- Testcase 119 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(0, 0), map, 100, 250);
    cout << watson->getNextPosition().str() << endl;

    delete map;
    delete watson;
}




//"Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1120() {
    cout << "----- Testcase 120 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(0, 1), map, 100, 250);
    watson->move();
    cout << watson->str();

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1121() {
    cout << "----- Testcase 121 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
    watson->move();
    cout << watson->str();

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và có thể đến được
void tc_1122() {
    cout << "----- Testcase 122 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "DR", Position(3, 2), map, 100, 500);
    watson->move();
    cout << watson->str();

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và không thể đến được
void tc_1123() {
    cout << "----- Testcase 123 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "DR", Position(0, 2), map, 100, 500);
    watson->move();
    cout << watson->str();

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1124() {
    cout << "----- Testcase 124 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
    watson->move();
    cout << watson->str();

    delete map;
    delete watson;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1125() {
    cout << "----- Testcase 125 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(0, 0), map, 100, 250);
    watson->move();
    cout << watson->str();

    delete map;
    delete watson;
}


// Không dùng class TestStudyInPink
// "Constructor + str"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1132() {
    cout << "----- Testcase 132 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(0, 1), map, 100, 250);
    cout << watson->str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1133() {
    cout << "----- Testcase 133 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
    cout << watson->str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và có thể đến được
void tc_1134() {
    cout << "----- Testcase 134 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "DR", Position(3, 2), map, 100, 500);
    cout << watson->str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và không thể đến được
void tc_1135() {
    cout << "----- Testcase 135 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "DR", Position(0, 2), map, 100, 500);
    cout << watson->str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1136() {
    cout << "----- Testcase 136 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
    cout << watson->str() << endl;

    delete map;
    delete watson;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1137() {
    cout << "----- Testcase 137 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(0, 0), map, 100, 250);
    cout << watson->str() << endl;

    delete map;
    delete watson;
}



// ---------------------------------------------------CRIMINAL---------------------------------------------------------
// Không dùng class TestStudyInPink
// "Constructor + getNextPosition"

// moving rule có bước đi đầu tiên đến ô Path
void tc_1138() {
    cout << "----- Testcase 138 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1139() {
    cout << "----- Testcase 139 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1140() {
    cout << "----- Testcase 140 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(6, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(6, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1141() {
    cout << "----- Testcase 141 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1142() {
    cout << "----- Testcase 142 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
    cout << criminal->getNextPosition().str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}




//"Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1143() {
    cout << "----- Testcase 143 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    criminal->move();
    cout << criminal->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1144() {
    cout << "----- Testcase 144 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    criminal->move();
    cout << criminal->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1145() {
    cout << "----- Testcase 145 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(6, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(6, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    criminal->move();
    cout << criminal->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1146() {
    cout << "----- Testcase 146 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    criminal->move();
    cout << criminal->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1147() {
    cout << "----- Testcase 147 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
    criminal->move();
    cout << criminal->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}


// Không dùng class TestStudyInPink
// "Constructor + str"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1153() {
    cout << "----- Testcase 153 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1154() {
    cout << "----- Testcase 154 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1155() {
    cout << "----- Testcase 155 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(6, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(6, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1156() {
    cout << "----- Testcase 156 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(4, 3), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}
// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1157() {
    cout << "----- Testcase 157 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1158() {
    cout << "----- Testcase 158 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}



//------------------------------------Criminal đến (Sherlock+Watson)----------------------------------

// Criminal đến (Sherlock+Watson)
// Không dùng class TestStudyInPink
// "có 1 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó có thể đi đến được"
void tc_1159() {
    cout << "----- Testcase 159 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(0, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// "có 1 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó không đi đến được"
void tc_1160() {
    cout << "----- Testcase 160 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// "có 2 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó có thể đi đến được"
void tc_1161() {
    cout << "----- Testcase 161 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(3, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(3, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// "có 2 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó không thể đi đến được"
void tc_1162() {
    cout << "----- Testcase 162 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 3), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 3), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

void tc_1297() {
    cout << "----- Testcase 297 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void tc_1298() {
    cout << "----- Testcase 298 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(firstAid1);
    sherlockBag->insert(firstAid2);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete firstAid1;
    delete firstAid2;
    delete sherlockBag;
}

void tc_1299() {
    cout << "----- Testcase 299 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    for (int i=0; i<12; i++) {
        BaseItem * firstAid = new FirstAid();
        sherlockBag->insert(firstAid);
    }

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void tc_1300() {
    cout << "----- Testcase 300 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);
    
    for (int i=0; i<14; i++) {
        BaseItem * firstAid = new FirstAid();
        sherlockBag->insert(firstAid);
    }

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void tc_1301() {
    cout << "----- Testcase 301 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    for (int i=0; i<20; i++) {
        BaseItem * firstAid = new FirstAid();
        sherlockBag->insert(firstAid);
    }

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void tc_1302() {
    cout << "----- Testcase 302 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->get();

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void tc_1303() {
    cout << "----- Testcase 303 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseItem * passingCard1 = new PassingCard("RobotSW");
    BaseItem * passingCard2 = new PassingCard("all");

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(passingCard1);
    sherlockBag->insert(passingCard2);

    sherlockBag->get();

    cout << sherlockBag->getCount() << endl; // str

    delete map;
    delete sherlock;
    delete passingCard1;
    delete passingCard2;
    delete sherlockBag;
}

void tc_1304() {
    cout << "----- Testcase 304 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 120, 300);

    BaseItem * passingCard = new PassingCard("all"); 
    BaseItem * firstAid = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(passingCard);
    sherlockBag->insert(firstAid);

    sherlockBag->get();

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete passingCard;
    delete firstAid;
    delete sherlockBag;
}

void tc_1305() {
    cout << "----- Testcase 305 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(firstAid1);
    sherlockBag->insert(firstAid2);

    sherlockBag->get();

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete firstAid1;
    delete firstAid2;
    delete sherlockBag;
}

void tc_1306() {
    cout << "----- Testcase 306 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->get(FIRST_AID);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void tc_1307() {
    cout << "----- Testcase 303 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseItem * passingCard1 = new PassingCard("RobotS");
    BaseItem * passingCard2 = new PassingCard("RobotC");

    BaseBag * sherlockBag = new SherlockBag(sherlock);
    sherlockBag->insert(passingCard1);
    sherlockBag->insert(passingCard2);

    sherlockBag->get(PASSING_CARD);
    
    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete passingCard1;
    delete passingCard2;
    delete sherlockBag;
}

void tc_1308() {
    cout << "----- Testcase 304 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 120, 300);

    BaseItem * passingCard = new PassingCard("all");
    BaseItem * firstAid = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(passingCard);
    sherlockBag->insert(firstAid);

    sherlockBag->get(FIRST_AID);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete passingCard;
    delete firstAid;
    delete sherlockBag;
}

void tc_1309() {
    cout << "----- Testcase 305 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(firstAid1);
    sherlockBag->insert(firstAid2);

    sherlockBag->get(FIRST_AID);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete firstAid1;
    delete firstAid2;
    delete sherlockBag;
}


void tc_1323() {
    cout << "----- Testcase 323 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 150, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
}

void tc_1324() {
    cout << "----- Testcase 324 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(firstAid1);
    watsonBag->insert(firstAid2);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete firstAid1;
    delete firstAid2;
}

void tc_1325() {
    cout << "----- Testcase 325 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    for (int i=0; i<14; i++) {
        BaseItem * firstAid = new FirstAid();
        watsonBag->insert(firstAid);
    }

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void tc_1326() {
    cout << "----- Testcase 326 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    for (int i=0; i<16; i++) {
        BaseItem * firstAid = new FirstAid();
        watsonBag->insert(firstAid);
    }

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void tc_1327() {
    cout << "----- Testcase 327 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    for (int i=0; i<25; i++) {
        BaseItem * firstAid = new FirstAid();
        watsonBag->insert(firstAid);
    }

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void tc_1328() {
    cout << "----- Testcase 328 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    cout << watsonBag->get() << endl;

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void tc_1329() {
    cout << "----- Testcase 329 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * excemptionCard1 = new ExcemptionCard();
    BaseItem * excemptionCard2 = new ExcemptionCard();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard1);
    watsonBag->insert(excemptionCard2);

    watsonBag->get();

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete excemptionCard1;
    delete excemptionCard2;
    delete watsonBag;
}

void tc_1330() {
    cout << "----- Testcase 330 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * excemptionCard = new ExcemptionCard();
    BaseItem * firstAid = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard);
    watsonBag->insert(firstAid);

    watsonBag->get();

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete excemptionCard;
    delete firstAid;
    delete watsonBag;
}

void tc_1331() {
    cout << "----- Testcase 331 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(firstAid1);
    watsonBag->insert(firstAid2);

    watsonBag->get();

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete firstAid1;
    delete firstAid2;
    delete watsonBag;
}

void tc_1332() {
    cout << "----- Testcase 332 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->get(FIRST_AID);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void tc_1333() {
    cout << "----- Testcase 333 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * excemptionCard1 = new ExcemptionCard();
    BaseItem * excemptionCard2 = new ExcemptionCard();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard1);
    watsonBag->insert(excemptionCard2);

    watsonBag->get(EXCEMPTION_CARD);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete excemptionCard1;
    delete excemptionCard2;
    delete watsonBag;
}

void tc_1334() {
    cout << "----- Testcase 334 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * excemptionCard = new ExcemptionCard();
    BaseItem * firstAid = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard);
    watsonBag->insert(firstAid);

    watsonBag->get(FIRST_AID);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete excemptionCard;
    delete firstAid;
    delete watsonBag;
}

void tc_1335() {
    cout << "----- Testcase 335 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(firstAid1);
    watsonBag->insert(firstAid2);

    watsonBag->get(FIRST_AID);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete firstAid1;
    delete firstAid2;
    delete watsonBag;
}

void tc_1362() {
    cout << "----- Testcase 362 -----" << endl;
    string config_path = "tc_362_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1363() {
    cout << "----- Testcase 363 -----" << endl;
    string config_path = "./configs/tc_363_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1364() {
    cout << "----- Testcase 364 -----" << endl;
    string config_path = "./configs/tc_364_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1365() {
    cout << "----- Testcase 365 -----" << endl;
    string config_path = "./configs/tc_365_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1200() {
    cout << "----- Testcase 200 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS * robotS = new RobotS(3, Position(3,3), map, criminal, sherlock);
    int distance_old = robotS->getDistance();
    
    Position new_position = robotS->getNextPosition();
    RobotS * robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
    int distance_new = robotS->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotS;
    delete robotS_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1201() {
    cout << "----- Testcase 201 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(3, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS * robotS = new RobotS(3, Position(3,2), map, criminal, sherlock);
    int distance_old = robotS->getDistance();
    
    Position new_position = robotS->getNextPosition();
    RobotS * robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
    int distance_new = robotS->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotS;
    delete robotS_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}


void tc_1202() {
    cout << "----- Testcase 202 -----" << endl;
    int num_walls = 5;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(3,2), Position(4,3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS * robotS = new RobotS(3, Position(3,3), map, criminal, sherlock);
    robotS->move();
    robotS->str();

    delete robotS;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1167() {
    cout << "----- Testcase 167 -----" << endl;

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(5);
    cout << arr_mv_objs->str() << endl;
    delete arr_mv_objs;
}


void tc_1168() {
    cout << "----- Testcase 168 -----" << endl;

    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    
    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(5);
    arr_mv_objs->add(sherlock);

    cout << arr_mv_objs->str() << endl;
    delete arr_mv_objs;
    delete sherlock;
    delete map;
}


void tc_1169() {
    cout << "----- Testcase 169 -----" << endl;

    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(3);
    arr_mv_objs->add(criminal);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);

    cout << arr_mv_objs->str() << endl;

    delete arr_mv_objs;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}


bool tc_1170() {
    cout << "----- Testcase 170 -----" << endl;

    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(3);
    arr_mv_objs->add(criminal);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    
    bool result = arr_mv_objs->isFull();

    delete arr_mv_objs;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;

    return result;
}


bool tc_1171() {
    cout << "----- Testcase 171 -----" << endl;

    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(3);
    bool result = arr_mv_objs->add(sherlock);
    delete arr_mv_objs;
    delete sherlock;
    delete map;

    return result;
}

bool tc_1172() {
    cout << "----- Testcase 172 -----" << endl;

    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(2);
    arr_mv_objs->add(criminal);
    arr_mv_objs->add(sherlock);
    bool result = arr_mv_objs->add(watson);

    delete arr_mv_objs;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;

    return result;
}

bool tc_1173() {
    cout << "----- Testcase 173 -----" << endl;

    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    Sherlock * sherlock_2 = new Sherlock(3, "UUR", Position(1, 3), map, 250, 450);
    Sherlock * sherlock_3 = new Sherlock(4, "RRU", Position(1, 3), map, 250, 450);

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(1);
    arr_mv_objs->add(criminal);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(sherlock_2);
    arr_mv_objs->add(sherlock_3);
    bool result = arr_mv_objs->add(watson);

    delete arr_mv_objs;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;

    return result;
}


void tc_1181() {
    cout << "----- Testcase 181 -----" << endl;

    Configuration * config = new Configuration("181.txt"); // 168
    cout << config->str() << endl;
    delete config;
}

void tc_1182() {
    cout << "----- Testcase 182 -----" << endl;

    Configuration * config = new Configuration("./configs/182.txt");
    cout << config->str() << endl;
    delete config;
}


void tc_1183() {
    cout << "----- Testcase 183 -----" << endl;

    Configuration * config = new Configuration("./configs/183.txt");
    cout << config->str() << endl;
    delete config;
}

void tc_1184() {
    cout << "----- Testcase 184 -----" << endl;

    Configuration * config = new Configuration("./configs/184.txt");
    cout << config->str() << endl;
    delete config;
}

void tc_1185() {
    cout << "----- Testcase 185 -----" << endl;

    Configuration * config = new Configuration("185.txt");
    cout << config->str() << endl;
    delete config;
}

void tc_1186() {
    cout << "----- Testcase 186 -----" << endl;

    Configuration * config = new Configuration("./configs/186.txt");
    cout << config->str() << endl;
    delete config;
}

void tc_1187() {
    cout << "----- Testcase 187 -----" << endl;

    Configuration * config = new Configuration("./configs/187.txt");
    cout << config->str() << endl;
    delete config;
}


void tc_1188() {
    cout << "----- Testcase 188 -----" << endl;

    Configuration * config = new Configuration("./configs/188.txt");
    cout << config->str() << endl;
    delete config;
}


void tc_1189() {
    cout << "----- Testcase 189 -----" << endl;

    Configuration * config = new Configuration("./configs/189.txt");
    cout << config->str() << endl;
    delete config;
}

void tc_1199() {
    cout << "----- Testcase 199 -----" << endl;
    int num_walls = 5;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(3,2), Position(4,3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS * robotS = new RobotS(3, Position(3,3), map, criminal, sherlock);
    int distance_old = robotS->getDistance();

    Position new_position = robotS->getNextPosition();
    RobotS * robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
    int distance_new = robotS->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotS;
    delete robotS_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1203() {
    cout << "----- Testcase 203 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS * robotS = new RobotS(3, Position(3,3), map, criminal, sherlock);
    robotS->move();
    robotS->str();

    delete robotS;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}


void tc_1204() {
    cout << "----- Testcase 204 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(3, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS * robotS = new RobotS(3, Position(3,2), map, criminal, sherlock);
    robotS->move();
    robotS->str();

    delete robotS;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1211() {
    cout << "----- Testcase 211 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW * robotW = new RobotW(3, Position(7,1), map, criminal, watson);
    int distance_old = robotW->getDistance();

    Position new_position = robotW->getNextPosition();
    RobotW * robotW_new = new RobotW(4, new_position, map, criminal, watson);
    int distance_new = robotW->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotW;
    delete robotW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1212() {
    cout << "----- Testcase 212 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW * robotW = new RobotW(3, Position(2, 2), map, criminal, watson);
    int distance_old = robotW->getDistance();

    Position new_position = robotW->getNextPosition();
    RobotW * robotW_new = new RobotW(4, new_position, map, criminal, watson);
    int distance_new = robotW->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotW;
    delete robotW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1213() {
    cout << "----- Testcase 213 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW * robotW = new RobotW(3, Position(2, 1), map, criminal, watson);
    int distance_old = robotW->getDistance();

    Position new_position = robotW->getNextPosition();
    RobotW * robotW_new = new RobotW(4, new_position, map, criminal, watson);
    int distance_new = robotW->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotW;
    delete robotW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1214() {
    cout << "----- Testcase 214 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW * robotW = new RobotW(3, Position(7,1), map, criminal, watson);
    robotW->move();
    robotW->str();

    delete robotW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1215() {
    cout << "----- Testcase 215 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW * robotW = new RobotW(3, Position(2, 2), map, criminal, watson);
    robotW->move();
    robotW->str();

    delete robotW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1216() {
    cout << "----- Testcase 216 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW * robotW = new RobotW(3, Position(2, 1), map, criminal, watson);
    robotW->move();
    robotW->str();

    delete robotW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1223() {
    cout << "----- Testcase 223 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW * robotSW = new RobotSW(3, Position(7,1), map, criminal, sherlock, watson);
    int distance_old = robotSW->getDistance();

    Position new_position = robotSW->getNextPosition();
    RobotSW * robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
    int distance_new = robotSW->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotSW;
    delete robotSW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1224() {
    cout << "----- Testcase 224 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW * robotSW = new RobotSW(3, Position(2,2), map, criminal, sherlock, watson);
    int distance_old = robotSW->getDistance();

    Position new_position = robotSW->getNextPosition();
    RobotSW * robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
    int distance_new = robotSW->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotSW;
    delete robotSW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1225() {
    cout << "----- Testcase 225 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW * robotSW = new RobotSW(3, Position(2,1), map, criminal, sherlock, watson);
    int distance_old = robotSW->getDistance();

    Position new_position = robotSW->getNextPosition();
    RobotSW * robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
    int distance_new = robotSW->getDistance();

    if(distance_old - distance_new >= 0) cout << "Can get close";
    else cout << "Can not get close";

    delete robotSW;
    delete robotSW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1226() {
    cout << "----- Testcase 226 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW * robotSW = new RobotSW(3, Position(7,1), map, criminal, sherlock, watson);
    cout << "Current: " << robotSW->str() << endl;
    robotSW->move();
    cout << "Next: " << robotSW->str() << endl;

    delete robotSW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1227() {
    cout << "----- Testcase 227 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW * robotSW = new RobotSW(3, Position(2,2), map, criminal, sherlock, watson);
    cout << "Current: " << robotSW->str() << endl;
    robotSW->move();
    cout << "Next: " << robotSW->str() << endl;

    delete robotSW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1228() {
    cout << "----- Testcase 228 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW * robotSW = new RobotSW(3, Position(2,1), map, criminal, sherlock, watson);
    cout << "Current: " << robotSW->str() << endl;
    robotSW->move();
    cout << "Next: " << robotSW->str() << endl;

    delete robotSW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1235() {
    cout << "----- Testcase 235 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotC * robotC = new RobotC(3, Position(7,1), map, criminal);

    cout << "First position: " << robotC->getCurrentPosition().str() << endl;
    Position new_position = robotC->getNextPosition();
    RobotC * robotC_new = new RobotC(4, new_position, map, criminal);

    cout << "Next position: " << robotC_new->getCurrentPosition().str() << endl;

    delete robotC;
    delete robotC_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1236() {
    cout << "----- Testcase 236 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotC * robotC = new RobotC(3, Position(7,1), map, criminal);

    Position new_position = robotC->getNextPosition();
    RobotC * robotC_new = new RobotC(4, new_position, map, criminal);

    cout << robotC_new->getCurrentPosition().str() << endl;

    delete robotC;
    delete robotC_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1237() {
    cout << "----- Testcase 237 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(2, 3), map, sherlock, watson);
    RobotC * robotC = new RobotC(3, Position(2,1), map, criminal);
    cout << "Current: " << robotC->str() << endl;
    Position new_position = robotC->getNextPosition();
    cout << "Next: " << new_position.str() << endl;
    RobotC * robotC_new = new RobotC(4, new_position, map, criminal);

    delete robotC;
    delete robotC_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1238() {
    cout << "----- Testcase 238 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotC * robotC = new RobotC(3, Position(7,1), map, criminal);
    cout << "Current: " << robotC->str() << endl;
    robotC->move();
    cout << "Next: " << robotC->str() << endl;

    delete robotC;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1239() {
    cout << "----- Testcase 239 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotC * robotC = new RobotC(3, Position(7,1), map, criminal);
    cout << "Current: " << robotC->str() << endl;
    robotC->move();
    cout << "Next: " << robotC->str() << endl;

    delete robotC;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1240() {
    cout << "----- Testcase 240 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(2, 3), map, sherlock, watson);
    RobotC * robotC = new RobotC(3, Position(2,1), map, criminal);
    cout << "Current: " << robotC->str() << endl;
    robotC->move();
    cout << "Next: " << robotC->str() << endl;

    delete robotC;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
}

void tc_1247() {
    cout << "----- Testcase 247 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(10);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    arr_mv_objs->add(criminal);

    for(int i = 0; i < 2; i++) {
        criminal->move();
    }

    cout << arr_mv_objs->str() << endl;

    delete sherlock;
    delete watson;
    delete criminal;
    delete arr_mv_objs;
    delete map;
}

void tc_1248() {
    cout << "----- Testcase 248 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 1), Position(3, 2), Position(2, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(2, 2), map, sherlock, watson);

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(10);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    arr_mv_objs->add(criminal);

    for(int i = 0; i < 2; i++) {
        criminal->move();
    }

    cout << arr_mv_objs->str() << endl;

    delete sherlock;
    delete watson;
    delete criminal;
    delete arr_mv_objs;
    delete map;
}

void tc_1249() {
    cout << "----- Testcase 249 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(10);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    arr_mv_objs->add(criminal);

    for(int i = 0; i < 5; i++) {
        criminal->move();
    }

    cout << arr_mv_objs->str() << endl;

    delete sherlock;
    delete watson;
    delete criminal;
    delete arr_mv_objs;
    delete map;
}

void tc_1250() {
    cout << "----- Testcase 250 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

    ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(10);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    arr_mv_objs->add(criminal);

    for(int i = 0; i < 8; i++) {
        criminal->move();
    }

    cout << arr_mv_objs->str() << endl;

    delete sherlock;
    delete watson;
    delete criminal;
    delete arr_mv_objs;
    delete map;
}

void tc_1366() {
    cout << "----- Testcase 366 -----" << endl;
    string config_path = "./configs/tc_366_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1367() {
    cout << "----- Testcase 367 -----" << endl;
    string config_path = "./configs/tc_367_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1368() {
    cout << "----- Testcase 368 -----" << endl;
    string config_path = "./configs/tc_368_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1369() {
    cout << "----- Testcase 369 -----" << endl;
    string config_path = "./configs/tc_369_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1370() {
    cout << "----- Testcase 370 -----" << endl;
    string config_path = "./configs/tc_370_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1371() {
    cout << "----- Testcase 371 -----" << endl;
    string config_path = "./configs/tc_371_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1372() {
    cout << "----- Testcase 372 -----" << endl;
    string config_path = "./configs/tc_372_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1373() {
    cout << "----- Testcase 373 -----" << endl;
    string config_path = "./configs/tc_373_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1374() {
    cout << "----- Testcase 374 -----" << endl;
    string config_path = "./configs/tc_374_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1375() {
    cout << "----- Testcase 375 -----" << endl;
    string config_path = "./configs/tc_375_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

void tc_1376() {
    cout << "----- Testcase 376 -----" << endl;
    string config_path = "./configs/tc_376_config.txt";
    bool verbose = true;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    program->printResult();
    delete program;
}

class TestStudyInPink{
    public:
    TestStudyInPink() = default;

    static void tc_1042();
    static void tc_1043();
    static void tc_1044();
    static void tc_1045();
    static void tc_1046();
    static void tc_1047();
    static void tc_1048();
    static void tc_1049();
    static void tc_1050();
    static void tc_1051();
    static void tc_1052();
    static void tc_1053();

    static void tc_1074();
    static void tc_1075();
    static void tc_1076();
    static void tc_1077();
    static void tc_1078();
    static void tc_1079();
    static void tc_1080();
    static void tc_1081();
    static void tc_1082();
    static void tc_1083();
    static void tc_1084();
    static void tc_1085();
    static void tc_1086();
    static void tc_1087();
    static void tc_1088();
    static void tc_1089();
    static void tc_1090();
    static void tc_1091();
    static void tc_1092();
    static void tc_1093();

    static void tc_1104();
    static void tc_1105();
    static void tc_1106();
    static void tc_1107();
    static void tc_1108();

    static void tc_1126();
    static void tc_1127();
    static void tc_1128();
    static void tc_1129();
    static void tc_1130();
    static void tc_1131();

    static void tc_1148();
    static void tc_1149();
    static void tc_1150();
    static void tc_1151();
    static void tc_1152();

    static void tc_1163();
    static void tc_1164();
    static void tc_1165();
    static void tc_1166();

    static void tc_1269();
    static void tc_1270();
    static void tc_1271();
    static void tc_1272();
    static void tc_1273();
    static void tc_1274();
    static void tc_1275();
    static void tc_1276();
    static void tc_1277();
    static void tc_1278();
    static void tc_1279();
    static void tc_1280();
    static void tc_1281();
    static void tc_1282();
    static void tc_1283();
    static void tc_1284();
    static void tc_1285();
    static void tc_1286();
    static void tc_1287();
    static void tc_1288();
    static void tc_1289();
    static void tc_1290();
    static void tc_1291();
    static void tc_1292();
    static void tc_1293();
    static void tc_1294();
    static void tc_1295();
    static void tc_1296();


    static void tc_1310();
    static void tc_1311();
    static void tc_1312();
    static void tc_1313();
    static void tc_1314();
    static void tc_1315();
    static void tc_1316();
    static void tc_1317();
    static void tc_1318();
    static void tc_1319();
    static void tc_1320();
    static void tc_1321();
    static void tc_1322();

    static void tc_1336();
    static void tc_1337();
    static void tc_1338();
    static void tc_1339();
    static void tc_1340();
    static void tc_1341();
    static void tc_1342();
    static void tc_1343();
    static void tc_1344();
    static void tc_1345();
    static void tc_1346();
    static void tc_1347();
    static void tc_1348();

    static void tc_1349();
    static void tc_1350();
    static void tc_1351();
    static void tc_1352();
    static void tc_1353();
    static void tc_1354();
    static void tc_1355();
    static void tc_1356();
    static void tc_1357();
    static void tc_1358();
    static void tc_1359();
    static void tc_1360();
    static void tc_1361();

    static void tc_1377();
    static void tc_1378();
    static void tc_1379();
    static void tc_1380();
    static void tc_1381();

    /*** Vinh ***/
        static void tc_1174() {
        cout << "----- Testcase 174 -----" << endl;  
        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(10);
        
        cout << "Count: " << arr_mv_objs->count << endl;
        cout << "Capacity: " << arr_mv_objs->capacity << endl;

        delete arr_mv_objs;
    }

    static void tc_1175() {
        cout << "----- Testcase 175 -----" << endl;  
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(10);

        arr_mv_objs->add(sherlock);
        
        cout << "Count: " << arr_mv_objs->count << endl;
        cout << "Capacity: " << arr_mv_objs->capacity << endl;
        
        delete arr_mv_objs;
        delete sherlock;
    }

    static void tc_1176() {
        cout << "----- Testcase 176 -----" << endl;  
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(3);
        arr_mv_objs->add(criminal);
        arr_mv_objs->add(sherlock);
        arr_mv_objs->add(watson);

        cout << "Count: " << arr_mv_objs->count << endl;
        cout << "Capacity: " << arr_mv_objs->capacity << endl;

        delete arr_mv_objs;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1177() {
        cout << "----- Testcase 177 -----" << endl;  
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(2);
        arr_mv_objs->add(criminal);
        arr_mv_objs->add(sherlock);
        

        cout << "Count: " << arr_mv_objs->count << endl;
        cout << "Capacity: " << arr_mv_objs->capacity << endl;

        delete arr_mv_objs;
        delete sherlock;
        delete criminal;
        delete map;
    }

    static void tc_1178() {
        cout << "----- Testcase 178 -----" << endl;  
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        

        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(3);
        arr_mv_objs->add(sherlock);

        cout << "Count: " << arr_mv_objs->count << endl;

        delete arr_mv_objs;
        delete sherlock;
        delete map;

    }

    static void tc_1179() {
        cout << "----- Testcase 179 -----" << endl;  
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        

        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(2);
        arr_mv_objs->add(criminal);
        arr_mv_objs->add(sherlock);
        arr_mv_objs->add(watson);

        cout << "Count: " << arr_mv_objs->count << endl;

        delete arr_mv_objs;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
        }
    

    static void tc_1180() {
        cout << "----- Testcase 180 -----" << endl;  
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        Sherlock * sherlock_2 = new Sherlock(3, "UUR", Position(1, 3), map, 250, 450);
        Sherlock * sherlock_3 = new Sherlock(4, "RRU", Position(1, 3), map, 250, 450);

        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(1);
        arr_mv_objs->add(criminal);
        arr_mv_objs->add(sherlock);
        arr_mv_objs->add(sherlock_2);
        arr_mv_objs->add(sherlock_3);
        arr_mv_objs->add(watson);

        cout << "Count: " << arr_mv_objs->count << endl;

        delete arr_mv_objs;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
        }
    
    static void tc_1190() {
        cout << "----- Testcase 190 -----" << endl;

        Configuration * config = new Configuration("181.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1191() {
        cout << "----- Testcase 191 -----" << endl;

        Configuration * config = new Configuration("./configs/182.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1192() {
        cout << "----- Testcase 192 -----" << endl;

        Configuration * config = new Configuration("./configs/183.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1193() {
        cout << "----- Testcase 193 -----" << endl;

        Configuration * config = new Configuration("./configs/184.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1194() {
        cout << "----- Testcase 194 -----" << endl;

        Configuration * config = new Configuration("185.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1195() {
        cout << "----- Testcase 195 -----" << endl;

        Configuration * config = new Configuration("./configs/186.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1196() {
        cout << "----- Testcase 196 -----" << endl;

        Configuration * config = new Configuration("./configs/187.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1197() {
        cout << "----- Testcase 197 -----" << endl;

        Configuration * config = new Configuration("./configs/188.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1198() {
        cout << "----- Testcase 198 -----" << endl;

        Configuration * config = new Configuration("./configs/189.txt");
        cout << "Map Num Rows: " << config->map_num_rows << endl;
        cout << "Map Num Cols: " << config->map_num_cols << endl;
        cout << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
        cout << "Num Wall: " << config->num_walls << endl;
        if (config->num_walls != 0) {
            cout << "Array Wall: " << config->arr_walls->str() << endl;
        }
        cout << "Num Fake Wall: " << config->num_fake_walls << endl;
        if (config->num_fake_walls != 0) {
            cout << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
        }
        cout << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
        cout << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
        cout << "Sherlock init hp: " << config->sherlock_init_hp << endl;
        cout << "Sherlock init exp: " << config->sherlock_init_exp << endl;
        cout << "Watson Moving Rule: " << config->watson_moving_rule << endl;
        cout << "Watson init position: " << config->watson_init_pos.str() << endl;
        cout << "Watson init hp: " << config->watson_init_hp << endl;
        cout << "Watson init exp: " << config->watson_init_exp << endl;
        cout << "Criminal init position: " << config->criminal_init_pos.str() << endl;
        cout << "Number step: " << config->num_steps << endl;
        delete config;
    }

    static void tc_1205() {
        cout << "----- Testcase 205 -----" << endl;
        int num_walls = 5;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(3,2), Position(4,3)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotS * robotS = new RobotS(3, Position(3,3), map, criminal, sherlock);
        int distance_old = robotS->getDistance();

        Position new_position = robotS->getNextPosition();
        RobotS * robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
        int distance_new = robotS->getDistance();

        cout << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
        cout << "Next position: " << robotS_new->pos.getRow() << " " << robotS_new->pos.getCol() << endl;

        if(distance_old - distance_new >= 0) cout << "Can get close";
        else cout << "Can not get close";

        delete robotS;
        delete robotS_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1206() {
        cout << "----- Testcase 206 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotS * robotS = new RobotS(3, Position(3,3), map, criminal, sherlock);
        int distance_old = robotS->getDistance();
        Position new_position = robotS->getNextPosition();
        RobotS * robotS_new = new RobotS(4, new_position, map, criminal, sherlock);

        cout << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
        cout << "Next position: " << robotS_new->pos.getRow() << " " << robotS_new->pos.getCol() << endl;

        delete robotS;
        delete robotS_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1207() {
        cout << "----- Testcase 207 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(2, 3), Position(3, 3), Position(4, 3)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(3, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotS * robotS = new RobotS(3, Position(3,2), map, criminal, sherlock);
        int distance_old = robotS->getDistance();
        
        Position new_position = robotS->getNextPosition();
        RobotS * robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
        int distance_new = robotS->getDistance();

        cout << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
        cout << "Next position: " << robotS_new->pos.getRow() << " " << robotS_new->pos.getCol() << endl;

        if(distance_old - distance_new >= 0) cout << "Can get close";
        else cout << "Can not get close";

        delete robotS;
        delete robotS_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1208() {
        cout << "----- Testcase 208 -----" << endl;
        int num_walls = 5;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(3,2), Position(4,3)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotS * robotS = new RobotS(3, Position(3,3), map, criminal, sherlock);
        cout << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
        robotS->move();
        cout << "Next position: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;

        delete robotS;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1209() {
        cout << "----- Testcase 209 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotS * robotS = new RobotS(3, Position(3,3), map, criminal, sherlock);
        cout << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
        robotS->move();
        cout << "Next position: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;

        delete robotS;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1210() {
        cout << "----- Testcase 210 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(2, 3), Position(3, 3), Position(4, 3)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(3, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotS * robotS = new RobotS(3, Position(3,2), map, criminal, sherlock);
        cout << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
        robotS->move();
        cout << "Next position: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;

        delete robotS;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1217() {
        cout << "----- Testcase 217 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotW * robotW = new RobotW(3, Position(7,1), map, criminal, watson);
        int distance_old = robotW->getDistance();

        Position new_position = robotW->getNextPosition();
        RobotW * robotW_new = new RobotW(4, new_position, map, criminal, watson);
        int distance_new = robotW->getDistance();

        cout << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
        cout << "Next position: " << robotW_new->pos.getRow() << " " << robotW_new->pos.getCol() << endl;

        if(distance_old - distance_new >= 0) cout << "Can get close";
        else cout << "Can not get close";

        delete robotW;
        delete robotW_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1218() {
        cout << "----- Testcase 218 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotW * robotW = new RobotW(3, Position(2, 2), map, criminal, watson);
        int distance_old = robotW->getDistance();

        Position new_position = robotW->getNextPosition();
        RobotW * robotW_new = new RobotW(4, new_position, map, criminal, watson);
        int distance_new = robotW->getDistance();

        cout << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
        cout << "Next position: " << robotW_new->pos.getRow() << " " << robotW_new->pos.getCol() << endl;

        if(distance_old - distance_new >= 0) cout << "Can get close";
        else cout << "Can not get close";

        delete robotW;
        delete robotW_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }


    static void tc_1219() {
        cout << "----- Testcase 219 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotW * robotW = new RobotW(3, Position(2, 1), map, criminal, watson);
        int distance_old = robotW->getDistance();

        Position new_position = robotW->getNextPosition();
        RobotW * robotW_new = new RobotW(4, new_position, map, criminal, watson);
        int distance_new = robotW->getDistance();

        cout << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
        cout << "Next position: " << robotW_new->pos.getRow() << " " << robotW_new->pos.getCol() << endl;

        if(distance_old - distance_new >= 0) cout << "Can get close";
        else cout << "Can not get close";

        delete robotW;
        delete robotW_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1220() {
        cout << "----- Testcase 220 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotW * robotW = new RobotW(3, Position(7,1), map, criminal, watson);
        cout << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
        robotW->move();
        cout << "Next position: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;

        delete robotW;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1221() {
        cout << "----- Testcase 221 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotW * robotW = new RobotW(3, Position(2, 2), map, criminal, watson);
        cout << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
        robotW->move();
        cout << "Next position: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;

        delete robotW;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1222() {
        cout << "----- Testcase 222 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotW * robotW = new RobotW(3, Position(2, 1), map, criminal, watson);
        cout << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
        robotW->move();
        cout << "Next position: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;

        delete robotW;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1229() {
        cout << "----- Testcase 229 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotSW * robotSW = new RobotSW(3, Position(7,1), map, criminal, sherlock, watson);
        int distance_old = robotSW->getDistance();

        Position new_position = robotSW->getNextPosition();
        RobotSW * robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
        int distance_new = robotSW->getDistance();

        cout << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
        cout << "Next position: " << robotSW_new->pos.getRow() << " " << robotSW_new->pos.getCol() << endl;

        if(distance_old - distance_new >= 0) cout << "Can get close";
        else cout << "Can not get close";

        delete robotSW;
        delete robotSW_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1230() {
        cout << "----- Testcase 230 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotSW * robotSW = new RobotSW(3, Position(2,2), map, criminal, sherlock, watson);
        int distance_old = robotSW->getDistance();

        Position new_position = robotSW->getNextPosition();
        RobotSW * robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
        int distance_new = robotSW->getDistance();

        cout << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
        cout << "Next position: " << robotSW_new->pos.getRow() << " " << robotSW_new->pos.getCol() << endl;

        if(distance_old - distance_new >= 0) cout << "Can get close";
        else cout << "Can not get close";

        delete robotSW;
        delete robotSW_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1231() {
        cout << "----- Testcase 231 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotSW * robotSW = new RobotSW(3, Position(2,1), map, criminal, sherlock, watson);
        int distance_old = robotSW->getDistance();

        Position new_position = robotSW->getNextPosition();
        RobotSW * robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
        int distance_new = robotSW->getDistance();

        cout << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
        cout << "Next position: " << robotSW_new->pos.getRow() << " " << robotSW_new->pos.getCol() << endl;

        if(distance_old - distance_new >= 0) cout << "Can get close";
        else cout << "Can not get close";

        delete robotSW;
        delete robotSW_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1232() {
        cout << "----- Testcase 232 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotSW * robotSW = new RobotSW(3, Position(7,1), map, criminal, sherlock, watson);

        cout << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
        robotSW->move();
        cout << "Next position: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;

        delete robotSW;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1233() {
        cout << "----- Testcase 233 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotSW * robotSW = new RobotSW(3, Position(2,2), map, criminal, sherlock, watson);

        cout << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
        robotSW->move();
        cout << "Next position: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;

        delete robotSW;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1234() {
        cout << "----- Testcase 234 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotSW * robotSW = new RobotSW(3, Position(2,1), map, criminal, sherlock, watson);
        cout << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
        robotSW->move();
        cout << "Next position: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;

        delete robotSW;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1241() {
        cout << "----- Testcase 241 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotC * robotC = new RobotC(3, Position(7,1), map, criminal);

        Position new_position = robotC->getNextPosition();
        RobotC * robotC_new = new RobotC(4, new_position, map, criminal);

        cout << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
        cout << "Next position: " << robotC_new->pos.getRow() << " " << robotC_new->pos.getCol() << endl;

        delete robotC;
        delete robotC_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1242() {
        cout << "----- Testcase 242 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotC * robotC = new RobotC(3, Position(7,1), map, criminal);

        Position new_position = robotC->getNextPosition();
        RobotC * robotC_new = new RobotC(4, new_position, map, criminal);

        cout << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
        cout << "Next position: " << robotC_new->pos.getRow() << " " << robotC_new->pos.getCol() << endl;

        delete robotC;
        delete robotC_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1243() {
        cout << "----- Testcase 243 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(2, 3), map, sherlock, watson);
        RobotC * robotC = new RobotC(3, Position(2,1), map, criminal);
        // int distance_old = robotC->getDistance();

        Position new_position = robotC->getNextPosition();
        RobotC * robotC_new = new RobotC(4, new_position, map, criminal);
        // int distance_new = robotC->getDistance();

        cout << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
        cout << "Next position: " << robotC_new->pos.getRow() << " " << robotC_new->pos.getCol() << endl;

        // if(distance_old - distance_new >= 0) cout << "Can get close";
        // else cout << "Can not get close";

        delete robotC;
        delete robotC_new;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1244() {
        cout << "----- Testcase 244 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7,2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotC * robotC = new RobotC(3, Position(7,1), map, criminal);
        cout << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
        robotC->move();
        cout << "Next position: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;

        delete robotC;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1245() {
        cout << "----- Testcase 245 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
        RobotC * robotC = new RobotC(3, Position(7,1), map, criminal);
        cout << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
        robotC->move();
        cout << "Next position: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;

        delete robotC;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1246() {
        cout << "----- Testcase 246 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(2, 3), map, sherlock, watson);
        RobotC * robotC = new RobotC(3, Position(2,1), map, criminal);
        cout << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
        robotC->move();
        cout << "Next position: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;

        delete robotC;
        delete sherlock;
        delete watson;
        delete criminal;
        delete map;
    }

    static void tc_1251() {
        cout << "----- Testcase 251 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(10);
        arr_mv_objs->add(sherlock);
        arr_mv_objs->add(watson);
        arr_mv_objs->add(criminal);
        
        for(int i = 0; i < arr_mv_objs->count; i++) {
            arr_mv_objs->arr_mv_objs[i]->move();
        }

        delete sherlock;
        delete watson;
        delete criminal;
        delete arr_mv_objs;
        delete map;
    }

    static void tc_1252() {
        cout << "----- Testcase 252 -----" << endl;
        int num_walls = 3;
        Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
        int num_fake_walls = 1;
        Position arr_fake_walls[] = {Position(2, 0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
        Watson * watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

        ArrayMovingObject * arr_mv_objs = new ArrayMovingObject(10);
        arr_mv_objs->add(sherlock);
        arr_mv_objs->add(watson);
        arr_mv_objs->add(criminal);

        for(int i = 0; i < 5; i++) {
            criminal->move();
        }
        
        for(int i = 0; i < arr_mv_objs->count; i++) {
            arr_mv_objs->arr_mv_objs[i]->move();
        }
        
        delete sherlock;
        delete watson;
        delete criminal;
        delete arr_mv_objs;
        delete map;
    }

    static void tc_1253() {
        cout << "----- Testcase 253 -----" << endl;
        BaseItem * magicBook = new MagicBook();
        
        delete magicBook;
    }

    static void tc_1254() {
        cout << "----- Testcase 254 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
            
        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

        BaseItem * magicBook = new MagicBook();

        magicBook->canUse(criminal, NULL);

        delete map;
        delete sherlock;
        delete watson;
        delete criminal;
        delete magicBook;
    }

    static void tc_1255() {
        cout << "----- Testcase 255 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
            
        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

        BaseItem * magicBook = new MagicBook();

        magicBook->canUse(sherlock, NULL);

        delete map;
        delete sherlock;
        delete magicBook;
    }

    static void tc_1256() {
        cout << "----- Testcase 256 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

        BaseItem * magicBook = new MagicBook();

        BaseBag * sherlockBag = new SherlockBag(sherlock);

        sherlockBag->insert(magicBook);

        magicBook->canUse(sherlock, NULL);

        delete map;
        delete sherlock;
        delete magicBook;
        delete sherlockBag;
    }

    static void tc_1257() {
        cout << "----- Testcase 257 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        BaseItem * magicBook = new MagicBook();

        magicBook->canUse(watson, NULL);

        delete map;
        delete watson;
        delete magicBook;
    }

    static void tc_1258() {
        cout << "----- Testcase 258 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        BaseItem * magicBook = new MagicBook();

        BaseBag * watsonBag = new WatsonBag(watson);

        watsonBag->insert(magicBook);

        magicBook->canUse(watson, NULL);

        delete map;
        delete watson;
        delete magicBook;
        delete watsonBag;
    }

    static void tc_1259() {
        cout << "----- Testcase 259 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

        BaseItem * magicBook = new MagicBook();

        BaseBag * sherlockBag = new SherlockBag(sherlock);

        sherlockBag->insert(magicBook);

        magicBook->use(sherlock, NULL);

        delete map;
        delete sherlock;
        delete magicBook;
        delete sherlockBag;
    }

    static void tc_1260() {
        cout << "----- Testcase 260 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        BaseItem * magicBook = new MagicBook();

        BaseBag * watsonBag = new WatsonBag(watson);

        watsonBag->insert(magicBook);

        magicBook->use(watson, NULL);

        delete map;
        delete watson;
        delete magicBook;
        delete watsonBag;
    }

    static void tc_1261() {
        cout << "----- Testcase 261 -----" << endl;
        BaseItem * energyDink = new EnergyDrink();
    
        delete energyDink;
    }

    static void tc_1262() {
        cout << "----- Testcase 262 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
            
        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

        BaseItem * energyDink = new EnergyDrink();

        energyDink->canUse(criminal, NULL);

        delete map;
        delete sherlock;
        delete watson;
        delete criminal;
        delete energyDink;
    }

    static void tc_1263() {
        cout << "----- Testcase 263 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
            
        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

        BaseItem * energyDink = new EnergyDrink();

        energyDink->canUse(sherlock, NULL);

        delete map;
        delete sherlock;
        delete energyDink;
    }

    static void tc_1264() {
        cout << "----- Testcase 264 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

        BaseItem * energyDink = new EnergyDrink();

        BaseBag * sherlockBag = new SherlockBag(sherlock);

        sherlockBag->insert(energyDink);

        energyDink->canUse(sherlock, NULL);

        delete map;
        delete sherlock;
        delete energyDink;
        delete sherlockBag;
    }

    static void tc_1265() {
        cout << "----- Testcase 265 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        BaseItem * energyDink = new EnergyDrink();

        energyDink->canUse(watson, NULL);

        delete map;
        delete watson;
        delete energyDink;
    }

    static void tc_1266() {
        cout << "----- Testcase 266 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        BaseItem * energyDink = new EnergyDrink();

        BaseBag * watsonBag = new WatsonBag(watson);

        watsonBag->insert(energyDink);

        energyDink->canUse(watson, NULL);

        delete map;
        delete watson;
        delete energyDink;
        delete watsonBag;
    }

    static void tc_1267() {
        cout << "----- Testcase 267 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

        BaseItem * energyDink = new EnergyDrink();

        BaseBag * sherlockBag = new SherlockBag(sherlock);

        sherlockBag->insert(energyDink);

        energyDink->use(sherlock, NULL);

        delete map;
        delete sherlock;
        delete energyDink;
        delete sherlockBag;
    }

    static void tc_1268() {
        cout << "----- Testcase 268 -----" << endl;
        int num_walls = 4;
        Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
        int num_fake_walls = 2;
        Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

        Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

        Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

        BaseItem * energyDink = new EnergyDrink();

        BaseBag * watsonBag = new WatsonBag(watson);

        watsonBag->insert(energyDink);

        energyDink->use(watson, NULL);

        delete map;
        delete watson;
        delete energyDink;
        delete watsonBag;
    }

    static void tc_1001() {
        ::tc_1001();
    }
    static void tc_1002() {
        ::tc_1002();
    }
    static void tc_1003() {
        ::tc_1003();
    }
    static void tc_1004() {
        ::tc_1004();
    }
    static void tc_1005() {
        ::tc_1005();
    }
    static void tc_1006() {
        ::tc_1006();
    }


    static void tc_1007() {
        ::tc_1007();
    }


    static void tc_1008() {
        ::tc_1008();
    }


    static void tc_1009() {
        ::tc_1009();
    }


    static void tc_1010() {
        ::tc_1010();
    }


    static void tc_1011() {
        ::tc_1011();
    }


    static void tc_1012() {
        ::tc_1012();
    }


    static void tc_1013() {
        ::tc_1013();
    }


    static void tc_1014() {
        ::tc_1014();
    }


    static void tc_1015() {
        ::tc_1015();
    }


    static void tc_1016() {
        ::tc_1016();
    }


    static void tc_1017() {
        ::tc_1017();
    }


    static void tc_1018() {
        ::tc_1018();
    }


    static void tc_1019() {
        ::tc_1019();
    }


    static void tc_1020() {
        ::tc_1020();
    }


    static void tc_1021() {
        ::tc_1021();
    }


    static void tc_1022() {
        ::tc_1022();
    }


    static void tc_1023() {
        ::tc_1023();
    }


    static void tc_1024() {
        ::tc_1024();
    }


    static void tc_1025() {
        ::tc_1025();
    }


    static void tc_1026() {
        ::tc_1026();
    }


    static void tc_1027() {
        ::tc_1027();
    }


    static void tc_1028() {
        ::tc_1028();
    }


    static void tc_1029() {
        ::tc_1029();
    }


    static void tc_1030() {
        ::tc_1030();
    }


    static void tc_1031() {
        ::tc_1031();
    }


    static void tc_1032() {
        ::tc_1032();
    }


    static void tc_1033() {
        ::tc_1033();
    }


    static void tc_1034() {
        ::tc_1034();
    }


    static void tc_1035() {
        ::tc_1035();
    }


    static void tc_1036() {
        ::tc_1036();
    }


    static void tc_1037() {
        ::tc_1037();
    }


    static void tc_1038() {
        ::tc_1038();
    }


    static void tc_1039() {
        ::tc_1039();
    }


    static void tc_1040() {
        ::tc_1040();
    }


    static void tc_1041() {
        ::tc_1041();
    }


    static void tc_1054() {
        ::tc_1054();
    }

    static void tc_1055() {
        ::tc_1055();
    }

    static void tc_1056() {
        ::tc_1056();
    }

    static void tc_1057() {
        ::tc_1057();
    }

    static void tc_1058() {
        ::tc_1058();
    }

    static void tc_1059() {
        ::tc_1059();
    }

    static void tc_1060() {
        ::tc_1060();
    }

    static void tc_1061() {
        ::tc_1061();
    }

    static void tc_1062() {
        ::tc_1062();
    }

    static void tc_1063() {
        ::tc_1063();
    }

    static void tc_1064() {
        ::tc_1064();
    }

    static void tc_1065() {
        ::tc_1065();
    }

    static void tc_1066() {
        ::tc_1066();
    }

    static void tc_1067() {
        ::tc_1067();
    }

    static void tc_1068() {
        ::tc_1068();
    }

    static void tc_1069() {
        ::tc_1069();
    }

    static void tc_1070() {
        ::tc_1070();
    }

    static void tc_1071() {
        ::tc_1071();
    }

    static void tc_1072() {
        ::tc_1072();
    }

    static void tc_1073() {
        ::tc_1073();
    }


    static void tc_1094() {
        ::tc_1094();
    }

    static void tc_1095() {
        ::tc_1095();
    }

    static void tc_1096() {
        ::tc_1096();
    }

    static void tc_1097() {
        ::tc_1097();
    }

    static void tc_1098() {
        ::tc_1098();
    }

    static void tc_1099() {
        ::tc_1099();
    }

    static void tc_1100() {
        ::tc_1100();
    }

    static void tc_1101() {
        ::tc_1101();
    }

    static void tc_1102() {
        ::tc_1102();
    }

    static void tc_1103() {
        ::tc_1103();
    }


    static void tc_1109() {
        ::tc_1109();
    }

    static void tc_1110() {
        ::tc_1110();
    }

    static void tc_1111() {
        ::tc_1111();
    }

    static void tc_1112() {
        ::tc_1112();
    }

    static void tc_1113() {
        ::tc_1113();
    }

    static void tc_1114() {
        ::tc_1114();
    }

    static void tc_1115() {
        ::tc_1115();
    }

    static void tc_1116() {
        ::tc_1116();
    }

    static void tc_1117() {
        ::tc_1117();
    }

    static void tc_1118() {
        ::tc_1118();
    }

    static void tc_1119() {
        ::tc_1119();
    }

    static void tc_1120() {
        ::tc_1120();
    }

    static void tc_1121() {
        ::tc_1121();
    }

    static void tc_1122() {
        ::tc_1122();
    }

    static void tc_1123() {
        ::tc_1123();
    }

    static void tc_1124() {
        ::tc_1124();
    }

    static void tc_1125() {
        ::tc_1125();
    }


    static void tc_1132() {
        ::tc_1132();
    }

    static void tc_1133() {
        ::tc_1133();
    }

    static void tc_1134() {
        ::tc_1134();
    }

    static void tc_1135() {
        ::tc_1135();
    }

    static void tc_1136() {
        ::tc_1136();
    }

    static void tc_1137() {
        ::tc_1137();
    }

    static void tc_1138() {
        ::tc_1138();
    }

    static void tc_1139() {
        ::tc_1139();
    }

    static void tc_1140() {
        ::tc_1140();
    }

    static void tc_1141() {
        ::tc_1141();
    }

    static void tc_1142() {
        ::tc_1142();
    }

    static void tc_1143() {
        ::tc_1143();
    }

    static void tc_1144() {
        ::tc_1144();
    }

    static void tc_1145() {
        ::tc_1145();
    }

    static void tc_1146() {
        ::tc_1146();
    }

    static void tc_1147() {
        ::tc_1147();
    }

    static void tc_1153() {
        ::tc_1153();
    }

    static void tc_1154() {
        ::tc_1154();
    }

    static void tc_1155() {
        ::tc_1155();
    }

    static void tc_1156() {
        ::tc_1156();
    }

    static void tc_1157() {
        ::tc_1157();
    }

    static void tc_1158() {
        ::tc_1158();
    }

    static void tc_1159() {
        ::tc_1159();
    }

    static void tc_1160() {
        ::tc_1160();
    }

    static void tc_1161() {
        ::tc_1161();
    }

    static void tc_1162() {
        ::tc_1162();
    }

    static void tc_1167() {
        ::tc_1167();
    }

    static void tc_1168() {
        ::tc_1168();
    }

    static void tc_1169() {
        ::tc_1169();
    }

    static void tc_1170() {
        ::tc_1170();
    }

    static void tc_1171() {
        ::tc_1171();
    }

    static void tc_1172() {
        ::tc_1172();
    }

    static void tc_1173() {
        ::tc_1173();
    }

    static void tc_1181() {
        ::tc_1181();
    }

    static void tc_1182() {
        ::tc_1182();
    }

    static void tc_1183() {
        ::tc_1183();
    }

    static void tc_1184() {
        ::tc_1184();
    }

    static void tc_1185() {
        ::tc_1185();
    }

    static void tc_1186() {
        ::tc_1186();
    }

    static void tc_1187() {
        ::tc_1187();
    }

    static void tc_1188() {
        ::tc_1188();
    }

    static void tc_1189() {
        ::tc_1189();
    }

    static void tc_1211() {
        ::tc_1211();
    }

    static void tc_1212() {
        ::tc_1212();
    }

    static void tc_1213() {
        ::tc_1213();
    }

    static void tc_1214() {
        ::tc_1214();
    }

    static void tc_1215() {
        ::tc_1215();
    }

    static void tc_1216() {
        ::tc_1216();
    }

    static void tc_1223() {
        ::tc_1223();
    }

    static void tc_1224() {
        ::tc_1224();
    }

    static void tc_1225() {
        ::tc_1225();
    }

    static void tc_1226() {
        ::tc_1226();
    }

    static void tc_1227() {
        ::tc_1227();
    }

    static void tc_1228() {
        ::tc_1228();
    }

    static void tc_1235() {
        ::tc_1235();
    }

    static void tc_1236() {
        ::tc_1236();
    }

    static void tc_1237() {
        ::tc_1237();
    }

    static void tc_1238() {
        ::tc_1238();
    }

    static void tc_1239() {
        ::tc_1239();
    }

    static void tc_1240() {
        ::tc_1240();
    }

    static void tc_1247() {
        ::tc_1247();
    }

    static void tc_1248() {
        ::tc_1248();
    }

    static void tc_1249() {
        ::tc_1249();
    }

    static void tc_1250() {
        ::tc_1250();
    }

    static void tc_1297() {
        ::tc_1297();
    }

    static void tc_1298() {
        ::tc_1298();
    }

    static void tc_1299() {
        ::tc_1299();
    }

    static void tc_1300() {
        ::tc_1300();
    }

    static void tc_1301() {
        ::tc_1301();
    }

    static void tc_1302() {
        ::tc_1302();
    }

    static void tc_1303() {
        ::tc_1303();
    }

    static void tc_1304() {
        ::tc_1304();
    }

    static void tc_1305() {
        ::tc_1305();
    }

    static void tc_1306() {
        ::tc_1306();
    }

    static void tc_1307() {
        ::tc_1307();
    }

    static void tc_1308() {
        ::tc_1308();
    }

    static void tc_1309() {
        ::tc_1309();
    }

    static void tc_1323() {
        ::tc_1323();
    }

    static void tc_1324() {
        ::tc_1324();
    }

    static void tc_1325() {
        ::tc_1325();
    }

    static void tc_1326() {
        ::tc_1326();
    }

    static void tc_1327() {
        ::tc_1327();
    }

    static void tc_1328() {
        ::tc_1328();
    }

    static void tc_1329() {
        ::tc_1329();
    }

    static void tc_1330() {
        ::tc_1330();
    }

    static void tc_1331() {
        ::tc_1331();
    }

    static void tc_1332() {
        ::tc_1332();
    }

    static void tc_1333() {
        ::tc_1333();
    }

    static void tc_1334() {
        ::tc_1334();
    }

    static void tc_1335() {
        ::tc_1335();
    }

    static void tc_1362() {
        ::tc_1362();
    }

    static void tc_1363() {
        ::tc_1363();
    }

    static void tc_1364() {
        ::tc_1364();
    }

    static void tc_1365() {
        ::tc_1365();
    }

    static void tc_1199() {
        ::tc_1199();
    }

    static void tc_1200() {
        ::tc_1200();
    }

    static void tc_1201() {
        ::tc_1201();
    }

    static void tc_1202() {
        ::tc_1202();
    }

    static void tc_1203() {
        ::tc_1203();
    }

    static void tc_1204() {
        ::tc_1204();
    }


    static void tc_1366() {
        ::tc_1366();
    }

    static void tc_1367() {
        ::tc_1367();
    }

    static void tc_1368() {
        ::tc_1368();
    }

    static void tc_1369() {
        ::tc_1369();
    }

    static void tc_1370() {
        ::tc_1370();
    }

    static void tc_1371() {
        ::tc_1371();
    }

    static void tc_1372() {
        ::tc_1372();
    }

    static void tc_1373() {
        ::tc_1373();
    }

    static void tc_1374() {
        ::tc_1374();
    }

    static void tc_1375() {
        ::tc_1375();
    }

    static void tc_1376() {
        ::tc_1376();
    }

    static void test(int i) {
        void (*func_ptr[381])() = {
            &TestStudyInPink::tc_1001,
            &TestStudyInPink::tc_1002,
            &TestStudyInPink::tc_1003,
            &TestStudyInPink::tc_1004,
            &TestStudyInPink::tc_1005,
            &TestStudyInPink::tc_1006,
            &TestStudyInPink::tc_1007,
            &TestStudyInPink::tc_1008,
            &TestStudyInPink::tc_1009,
            &TestStudyInPink::tc_1010,
            &TestStudyInPink::tc_1011,
            &TestStudyInPink::tc_1012,
            &TestStudyInPink::tc_1013,
            &TestStudyInPink::tc_1014,
            &TestStudyInPink::tc_1015,
            &TestStudyInPink::tc_1016,
            &TestStudyInPink::tc_1017,
            &TestStudyInPink::tc_1018,
            &TestStudyInPink::tc_1019,
            &TestStudyInPink::tc_1020,
            &TestStudyInPink::tc_1021,
            &TestStudyInPink::tc_1022,
            &TestStudyInPink::tc_1023,
            &TestStudyInPink::tc_1024,
            &TestStudyInPink::tc_1025,
            &TestStudyInPink::tc_1026,
            &TestStudyInPink::tc_1027,
            &TestStudyInPink::tc_1028,
            &TestStudyInPink::tc_1029,
            &TestStudyInPink::tc_1030,
            &TestStudyInPink::tc_1031,
            &TestStudyInPink::tc_1032,
            &TestStudyInPink::tc_1033,
            &TestStudyInPink::tc_1034,
            &TestStudyInPink::tc_1035,
            &TestStudyInPink::tc_1036,
            &TestStudyInPink::tc_1037,
            &TestStudyInPink::tc_1038,
            &TestStudyInPink::tc_1039,
            &TestStudyInPink::tc_1040,
            &TestStudyInPink::tc_1041,
            &TestStudyInPink::tc_1042,
            &TestStudyInPink::tc_1043,
            &TestStudyInPink::tc_1044,
            &TestStudyInPink::tc_1045,
            &TestStudyInPink::tc_1046,
            &TestStudyInPink::tc_1047,
            &TestStudyInPink::tc_1048,
            &TestStudyInPink::tc_1049,
            &TestStudyInPink::tc_1050,
            &TestStudyInPink::tc_1051,
            &TestStudyInPink::tc_1052,
            &TestStudyInPink::tc_1053,
            &TestStudyInPink::tc_1054,
            &TestStudyInPink::tc_1055,
            &TestStudyInPink::tc_1056,
            &TestStudyInPink::tc_1057,
            &TestStudyInPink::tc_1058,
            &TestStudyInPink::tc_1059,
            &TestStudyInPink::tc_1060,
            &TestStudyInPink::tc_1061,
            &TestStudyInPink::tc_1062,
            &TestStudyInPink::tc_1063,
            &TestStudyInPink::tc_1064,
            &TestStudyInPink::tc_1065,
            &TestStudyInPink::tc_1066,
            &TestStudyInPink::tc_1067,
            &TestStudyInPink::tc_1068,
            &TestStudyInPink::tc_1069,
            &TestStudyInPink::tc_1070,
            &TestStudyInPink::tc_1071,
            &TestStudyInPink::tc_1072,
            &TestStudyInPink::tc_1073,
            &TestStudyInPink::tc_1074,
            &TestStudyInPink::tc_1075,
            &TestStudyInPink::tc_1076,
            &TestStudyInPink::tc_1077,
            &TestStudyInPink::tc_1078,
            &TestStudyInPink::tc_1079,
            &TestStudyInPink::tc_1080,
            &TestStudyInPink::tc_1081,
            &TestStudyInPink::tc_1082,
            &TestStudyInPink::tc_1083,
            &TestStudyInPink::tc_1084,
            &TestStudyInPink::tc_1085,
            &TestStudyInPink::tc_1086,
            &TestStudyInPink::tc_1087,
            &TestStudyInPink::tc_1088,
            &TestStudyInPink::tc_1089,
            &TestStudyInPink::tc_1090,
            &TestStudyInPink::tc_1091,
            &TestStudyInPink::tc_1092,
            &TestStudyInPink::tc_1093,
            &TestStudyInPink::tc_1094,
            &TestStudyInPink::tc_1095,
            &TestStudyInPink::tc_1096,
            &TestStudyInPink::tc_1097,
            &TestStudyInPink::tc_1098,
            &TestStudyInPink::tc_1099,
            &TestStudyInPink::tc_1100,
            &TestStudyInPink::tc_1101,
            &TestStudyInPink::tc_1102,
            &TestStudyInPink::tc_1103,
            &TestStudyInPink::tc_1104,
            &TestStudyInPink::tc_1105,
            &TestStudyInPink::tc_1106,
            &TestStudyInPink::tc_1107,
            &TestStudyInPink::tc_1108,
            &TestStudyInPink::tc_1109,
            &TestStudyInPink::tc_1110,
            &TestStudyInPink::tc_1111,
            &TestStudyInPink::tc_1112,
            &TestStudyInPink::tc_1113,
            &TestStudyInPink::tc_1114,
            &TestStudyInPink::tc_1115,
            &TestStudyInPink::tc_1116,
            &TestStudyInPink::tc_1117,
            &TestStudyInPink::tc_1118,
            &TestStudyInPink::tc_1119,
            &TestStudyInPink::tc_1120,
            &TestStudyInPink::tc_1121,
            &TestStudyInPink::tc_1122,
            &TestStudyInPink::tc_1123,
            &TestStudyInPink::tc_1124,
            &TestStudyInPink::tc_1125,
            &TestStudyInPink::tc_1126,
            &TestStudyInPink::tc_1127,
            &TestStudyInPink::tc_1128,
            &TestStudyInPink::tc_1129,
            &TestStudyInPink::tc_1130,
            &TestStudyInPink::tc_1131,
            &TestStudyInPink::tc_1132,
            &TestStudyInPink::tc_1133,
            &TestStudyInPink::tc_1134,
            &TestStudyInPink::tc_1135,
            &TestStudyInPink::tc_1136,
            &TestStudyInPink::tc_1137,
            &TestStudyInPink::tc_1138,
            &TestStudyInPink::tc_1139,
            &TestStudyInPink::tc_1140,
            &TestStudyInPink::tc_1141,
            &TestStudyInPink::tc_1142,
            &TestStudyInPink::tc_1143,
            &TestStudyInPink::tc_1144,
            &TestStudyInPink::tc_1145,
            &TestStudyInPink::tc_1146,
            &TestStudyInPink::tc_1147,
            &TestStudyInPink::tc_1148,
            &TestStudyInPink::tc_1149,
            &TestStudyInPink::tc_1150,
            &TestStudyInPink::tc_1151,
            &TestStudyInPink::tc_1152,
            &TestStudyInPink::tc_1153,
            &TestStudyInPink::tc_1154,
            &TestStudyInPink::tc_1155,
            &TestStudyInPink::tc_1156,
            &TestStudyInPink::tc_1157,
            &TestStudyInPink::tc_1158,
            &TestStudyInPink::tc_1159,
            &TestStudyInPink::tc_1160,
            &TestStudyInPink::tc_1161,
            &TestStudyInPink::tc_1162,
            &TestStudyInPink::tc_1163,
            &TestStudyInPink::tc_1164,
            &TestStudyInPink::tc_1165,
            &TestStudyInPink::tc_1166,
            &TestStudyInPink::tc_1167,
            &TestStudyInPink::tc_1168,
            &TestStudyInPink::tc_1169,
            &TestStudyInPink::tc_1170,
            &TestStudyInPink::tc_1171,
            &TestStudyInPink::tc_1172,
            &TestStudyInPink::tc_1173,
            &TestStudyInPink::tc_1174,
            &TestStudyInPink::tc_1175,
            &TestStudyInPink::tc_1176,
            &TestStudyInPink::tc_1177,
            &TestStudyInPink::tc_1178,
            &TestStudyInPink::tc_1179,
            &TestStudyInPink::tc_1180,
            &TestStudyInPink::tc_1181,
            &TestStudyInPink::tc_1182,
            &TestStudyInPink::tc_1183,
            &TestStudyInPink::tc_1184,
            &TestStudyInPink::tc_1185,
            &TestStudyInPink::tc_1186,
            &TestStudyInPink::tc_1187,
            &TestStudyInPink::tc_1188,
            &TestStudyInPink::tc_1189,
            &TestStudyInPink::tc_1190,
            &TestStudyInPink::tc_1191,
            &TestStudyInPink::tc_1192,
            &TestStudyInPink::tc_1193,
            &TestStudyInPink::tc_1194,
            &TestStudyInPink::tc_1195,
            &TestStudyInPink::tc_1196,
            &TestStudyInPink::tc_1197,
            &TestStudyInPink::tc_1198,
            &TestStudyInPink::tc_1199,
            &TestStudyInPink::tc_1200,
            &TestStudyInPink::tc_1201,
            &TestStudyInPink::tc_1202,
            &TestStudyInPink::tc_1203,
            &TestStudyInPink::tc_1204,
            &TestStudyInPink::tc_1205,
            &TestStudyInPink::tc_1206,
            &TestStudyInPink::tc_1207,
            &TestStudyInPink::tc_1208,
            &TestStudyInPink::tc_1209,
            &TestStudyInPink::tc_1210,
            &TestStudyInPink::tc_1211,
            &TestStudyInPink::tc_1212,
            &TestStudyInPink::tc_1213,
            &TestStudyInPink::tc_1214,
            &TestStudyInPink::tc_1215,
            &TestStudyInPink::tc_1216,
            &TestStudyInPink::tc_1217,
            &TestStudyInPink::tc_1218,
            &TestStudyInPink::tc_1219,
            &TestStudyInPink::tc_1220,
            &TestStudyInPink::tc_1221,
            &TestStudyInPink::tc_1222,
            &TestStudyInPink::tc_1223,
            &TestStudyInPink::tc_1224,
            &TestStudyInPink::tc_1225,
            &TestStudyInPink::tc_1226,
            &TestStudyInPink::tc_1227,
            &TestStudyInPink::tc_1228,
            &TestStudyInPink::tc_1229,
            &TestStudyInPink::tc_1230,
            &TestStudyInPink::tc_1231,
            &TestStudyInPink::tc_1232,
            &TestStudyInPink::tc_1233,
            &TestStudyInPink::tc_1234,
            &TestStudyInPink::tc_1235,
            &TestStudyInPink::tc_1236,
            &TestStudyInPink::tc_1237,
            &TestStudyInPink::tc_1238,
            &TestStudyInPink::tc_1239,
            &TestStudyInPink::tc_1240,
            &TestStudyInPink::tc_1241,
            &TestStudyInPink::tc_1242,
            &TestStudyInPink::tc_1243,
            &TestStudyInPink::tc_1244,
            &TestStudyInPink::tc_1245,
            &TestStudyInPink::tc_1246,
            &TestStudyInPink::tc_1247,
            &TestStudyInPink::tc_1248,
            &TestStudyInPink::tc_1249,
            &TestStudyInPink::tc_1250,
            &TestStudyInPink::tc_1251,
            &TestStudyInPink::tc_1252,
            &TestStudyInPink::tc_1253,
            &TestStudyInPink::tc_1254,
            &TestStudyInPink::tc_1255,
            &TestStudyInPink::tc_1256,
            &TestStudyInPink::tc_1257,
            &TestStudyInPink::tc_1258,
            &TestStudyInPink::tc_1259,
            &TestStudyInPink::tc_1260,
            &TestStudyInPink::tc_1261,
            &TestStudyInPink::tc_1262,
            &TestStudyInPink::tc_1263,
            &TestStudyInPink::tc_1264,
            &TestStudyInPink::tc_1265,
            &TestStudyInPink::tc_1266,
            &TestStudyInPink::tc_1267,
            &TestStudyInPink::tc_1268,
            &TestStudyInPink::tc_1269,
            &TestStudyInPink::tc_1270,
            &TestStudyInPink::tc_1271,
            &TestStudyInPink::tc_1272,
            &TestStudyInPink::tc_1273,
            &TestStudyInPink::tc_1274,
            &TestStudyInPink::tc_1275,
            &TestStudyInPink::tc_1276,
            &TestStudyInPink::tc_1277,
            &TestStudyInPink::tc_1278,
            &TestStudyInPink::tc_1279,
            &TestStudyInPink::tc_1280,
            &TestStudyInPink::tc_1281,
            &TestStudyInPink::tc_1282,
            &TestStudyInPink::tc_1283,
            &TestStudyInPink::tc_1284,
            &TestStudyInPink::tc_1285,
            &TestStudyInPink::tc_1286,
            &TestStudyInPink::tc_1287,
            &TestStudyInPink::tc_1288,
            &TestStudyInPink::tc_1289,
            &TestStudyInPink::tc_1290,
            &TestStudyInPink::tc_1291,
            &TestStudyInPink::tc_1292,
            &TestStudyInPink::tc_1293,
            &TestStudyInPink::tc_1294,
            &TestStudyInPink::tc_1295,
            &TestStudyInPink::tc_1296,
            &TestStudyInPink::tc_1297,
            &TestStudyInPink::tc_1298,
            &TestStudyInPink::tc_1299,
            &TestStudyInPink::tc_1300,
            &TestStudyInPink::tc_1301,
            &TestStudyInPink::tc_1302,
            &TestStudyInPink::tc_1303,
            &TestStudyInPink::tc_1304,
            &TestStudyInPink::tc_1305,
            &TestStudyInPink::tc_1306,
            &TestStudyInPink::tc_1307,
            &TestStudyInPink::tc_1308,
            &TestStudyInPink::tc_1309,
            &TestStudyInPink::tc_1310,
            &TestStudyInPink::tc_1311,
            &TestStudyInPink::tc_1312,
            &TestStudyInPink::tc_1313,
            &TestStudyInPink::tc_1314,
            &TestStudyInPink::tc_1315,
            &TestStudyInPink::tc_1316,
            &TestStudyInPink::tc_1317,
            &TestStudyInPink::tc_1318,
            &TestStudyInPink::tc_1319,
            &TestStudyInPink::tc_1320,
            &TestStudyInPink::tc_1321,
            &TestStudyInPink::tc_1322,
            &TestStudyInPink::tc_1323,
            &TestStudyInPink::tc_1324,
            &TestStudyInPink::tc_1325,
            &TestStudyInPink::tc_1326,
            &TestStudyInPink::tc_1327,
            &TestStudyInPink::tc_1328,
            &TestStudyInPink::tc_1329,
            &TestStudyInPink::tc_1330,
            &TestStudyInPink::tc_1331,
            &TestStudyInPink::tc_1332,
            &TestStudyInPink::tc_1333,
            &TestStudyInPink::tc_1334,
            &TestStudyInPink::tc_1335,
            &TestStudyInPink::tc_1336,
            &TestStudyInPink::tc_1337,
            &TestStudyInPink::tc_1338,
            &TestStudyInPink::tc_1339,
            &TestStudyInPink::tc_1340,
            &TestStudyInPink::tc_1341,
            &TestStudyInPink::tc_1342,
            &TestStudyInPink::tc_1343,
            &TestStudyInPink::tc_1344,
            &TestStudyInPink::tc_1345,
            &TestStudyInPink::tc_1346,
            &TestStudyInPink::tc_1347,
            &TestStudyInPink::tc_1348,
            &TestStudyInPink::tc_1349,
            &TestStudyInPink::tc_1350,
            &TestStudyInPink::tc_1351,
            &TestStudyInPink::tc_1352,
            &TestStudyInPink::tc_1353,
            &TestStudyInPink::tc_1354,
            &TestStudyInPink::tc_1355,
            &TestStudyInPink::tc_1356,
            &TestStudyInPink::tc_1357,
            &TestStudyInPink::tc_1358,
            &TestStudyInPink::tc_1359,
            &TestStudyInPink::tc_1360,
            &TestStudyInPink::tc_1361,
            &TestStudyInPink::tc_1362,
            &TestStudyInPink::tc_1363,
            &TestStudyInPink::tc_1364,
            &TestStudyInPink::tc_1365,
            &TestStudyInPink::tc_1366,
            &TestStudyInPink::tc_1367,
            &TestStudyInPink::tc_1368,
            &TestStudyInPink::tc_1369,
            &TestStudyInPink::tc_1370,
            &TestStudyInPink::tc_1371,
            &TestStudyInPink::tc_1372,
            &TestStudyInPink::tc_1373,
            &TestStudyInPink::tc_1374,
            &TestStudyInPink::tc_1375,
            &TestStudyInPink::tc_1376,
            &TestStudyInPink::tc_1377,
            &TestStudyInPink::tc_1378,
            &TestStudyInPink::tc_1379,
            &TestStudyInPink::tc_1380,
            &TestStudyInPink::tc_1381,
        };
        func_ptr[i]();
    }
};





void TestStudyInPink::tc_1377() {
    cout << "----- Testcase 377 -----" << endl;
    string config_path = "./configs/tc_377_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    cout << program->config->str() << endl;
    cout << program->sherlock->str() << endl;
    cout << program->watson->str() << endl;
    cout << program->arr_mv_objs->str() << endl;

    program->printResult();
    delete program;
}

void TestStudyInPink::tc_1378() {
    cout << "----- Testcase 378 -----" << endl;
    string config_path = "./configs/tc_378_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    cout << program->config->str() << endl;
    cout << program->sherlock->str() << endl;
    cout << program->watson->str() << endl;
    cout << program->arr_mv_objs->str() << endl;

    program->printResult();
    delete program;
}

void TestStudyInPink::tc_1379() {
    cout << "----- Testcase 379 -----" << endl;
    string config_path = "./configs/tc_379_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    cout << program->config->str() << endl;
    cout << program->sherlock->str() << endl;
    cout << program->watson->str() << endl;
    cout << program->arr_mv_objs->str() << endl;

    program->printResult();
    delete program;
}

void TestStudyInPink::tc_1380() {
    cout << "----- Testcase 380 -----" << endl;
    string config_path = "./configs/tc_380_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    cout << program->config->str() << endl;
    cout << program->sherlock->str() << endl;
    cout << program->watson->str() << endl;
    cout << program->arr_mv_objs->str() << endl;

    program->printResult();
    delete program;
}

void TestStudyInPink::tc_1381() {
    cout << "----- Testcase 381 -----" << endl;
    string config_path = "./configs/tc_381_config.txt";
    bool verbose = false;
    StudyPinkProgram * program = new StudyPinkProgram(config_path);
    program->run(verbose);
    cout << program->config->str() << endl;
    cout << program->sherlock->str() << endl;
    cout << program->watson->str() << endl;
    cout << program->arr_mv_objs->str() << endl;

    program->printResult();
    delete program;
}

// Dùng class TestStudyInPink
// Khai báo bằng con trỏ, delete trên con trỏ

// num_walls == 0	num_fake_walls == 0
void TestStudyInPink::tc_1042() {
    cout << "----- Testcase 42 -----" << endl;
    int num_walls = 0;
    Position arr_walls[] = {};
    int num_fake_walls = 0;
    Position arr_fake_walls[] = {};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls == 0	num_fake_walls == 1
void TestStudyInPink::tc_1043() {
    cout << "----- Testcase 43 -----" << endl;
    int num_walls = 0;
    Position arr_walls[] = {};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(5, 5)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls == 0	num_fake_walls > 1
void TestStudyInPink::tc_1044() {
    cout << "----- Testcase 44 -----" << endl;
    int num_walls = 0;
    Position arr_walls[] = {};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(0, 0), Position(5, 5), Position(9, 9)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls == 0	num_fake_walls > 1
void TestStudyInPink::tc_1045() {
    cout << "----- Testcase 45 -----" << endl;
    int num_walls = 0;
    Position arr_walls[] = {};
    int num_fake_walls = 10;
    Position arr_fake_walls[] = {Position(0, 0), Position(1, 1), Position(2, 2), Position(3, 3), Position(4, 4), Position(5,5), Position(6, 6), Position(7, 7), Position(8, 8), Position(9, 9)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls == 1 num_fake_walls == 0
void TestStudyInPink::tc_1046() {
    cout << "----- Testcase 46 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(0, 9)};
    int num_fake_walls = 0;
    Position arr_fake_walls[] = {};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls == 1 num_fake_walls == 1
void TestStudyInPink::tc_1047() {
    cout << "----- Testcase 47 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(0, 9)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(0, 0)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls == 1 num_fake_walls > 1
void TestStudyInPink::tc_1048() {
    cout << "----- Testcase 48 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(0, 9)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(0, 0), Position(5, 5), Position(9, 9)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls == 1 num_fake_walls > 1
void TestStudyInPink::tc_1049() {
    cout << "----- Testcase 49 -----" << endl;
    int num_walls = 1;
    Position arr_walls[] = {Position(0, 9)};
    int num_fake_walls = 10;
    Position arr_fake_walls[] = {Position(0, 0), Position(1, 1), Position(2, 2), Position(3, 3), Position(4, 4), Position(5,5), Position(6, 6), Position(7, 7), Position(8, 8), Position(9, 9)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}


// num_walls > 1 num_fake_walls == 0
void TestStudyInPink::tc_1050() {
    cout << "----- Testcase 50 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(0, 9), Position(1, 8), Position(9, 0), Position(8, 1)};
    int num_fake_walls = 0;
    Position arr_fake_walls[] = {};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls > 1 num_fake_walls == 1
void TestStudyInPink::tc_1051() {
    cout << "----- Testcase 51 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(0, 9), Position(1, 8), Position(9, 0), Position(8, 1)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(5, 5)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls > 1 num_fake_walls > 1
void TestStudyInPink::tc_1052() {
    cout << "----- Testcase 52 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(0, 9), Position(1, 8), Position(9, 0), Position(8, 1)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(0, 0), Position(5, 5), Position(9, 9)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// num_walls > 1 num_fake_walls > 1
void TestStudyInPink::tc_1053() {
    cout << "----- Testcase 53 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(0, 9), Position(1, 8), Position(9, 0), Position(8, 1)};
    int num_fake_walls = 10;
    Position arr_fake_walls[] = {Position(0, 0), Position(1, 1), Position(2, 2), Position(3, 3), Position(4, 4), Position(5,5), Position(6, 6), Position(7, 7), Position(8, 8), Position(9, 9)};
    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
    for (int i = 0; i < map->num_rows; i++) {
        for (int j = 0; j < map->num_cols; j++) {
            cout << map->map[i][j]->getType();
            if (map->map[i][j]->getType() == FAKE_WALL) {
                FakeWall *fakewall = dynamic_cast<FakeWall*>(map->map[i][j]);
                cout << fakewall->getReqExp();
            }
            cout << "-";
        }
        cout << endl;    
    }
    delete map;
}

// Dùng class TestStudyInPink
// "Position ( int r =0 , int c =0) dùng cả 2 default param"
void TestStudyInPink::tc_1074() {
    cout << "----- Testcase 74 -----" << endl;
    Position pos = Position();
    cout << pos.r << "-" << pos.c;
}

// "Position ( int r =0 , int c =0) dùng 1 default param"
void TestStudyInPink::tc_1075() {
    cout << "----- Testcase 75 -----" << endl;
    Position pos = Position(1);
    cout << pos.r << "-" << pos.c;
}

// "Position ( int r =0 , int c =0) truyền cả 2 param"
void TestStudyInPink::tc_1076() {
    cout << "----- Testcase 76 -----" << endl;
    Position pos = Position(1, 3);
    cout << pos.r << "-" << pos.c;
}

// Position ( const string & str_pos ) ;
// r = 0, c = 0
void TestStudyInPink::tc_1077() {
    cout << "----- Testcase 77 -----" << endl;
    Position pos = Position("(0, 0)");
    cout << pos.r << "-" << pos.c;
}

// r > 0, c > 0
void TestStudyInPink::tc_1078() {
    cout << "----- Testcase 78 -----" << endl;
    Position pos = Position("(1, 2)");
    cout << pos.r << "-" << pos.c;
}

// r > 0, c < 0
void TestStudyInPink::tc_1079() {
    cout << "----- Testcase 79 -----" << endl;
    Position pos = Position("(1, -1)");
    cout << pos.r << "-" << pos.c;
}

// r < 0, c > 0
void TestStudyInPink::tc_1080() {
    cout << "----- Testcase 80 -----" << endl;
    Position pos = Position("(-2, 3)");
    cout << pos.r << "-" << pos.c;
}

// r < 0, c < 0
void TestStudyInPink::tc_1081() {
    cout << "----- Testcase 81 -----" << endl;
    Position pos = Position("(-2, -4)");
    cout << pos.r << "-" << pos.c;
}


// int getRow () const ;
void TestStudyInPink::tc_1082() {
    cout << "----- Testcase 82 -----" << endl;
    Position pos = Position("(3, 5)");
    cout << pos.getRow();
}

// int getRow () const ;
void TestStudyInPink::tc_1083() {
    cout << "----- Testcase 83 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.getRow();
}

// int getCol () const 
void TestStudyInPink::tc_1084() {
    cout << "----- Testcase 84 -----" << endl;
    Position pos = Position("(3, 5)");
    cout << pos.getCol();
}

// int getCol () const 
void TestStudyInPink::tc_1085() {
    cout << "----- Testcase 85 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.getCol();
}

// void setRow (int r)
void TestStudyInPink::tc_1086() {
    cout << "----- Testcase 86 -----" << endl;
    Position pos = Position("(3, 5)");
    pos.setRow(5);
    cout << pos.r << "-" << pos.c;
}

// void setRow (int r)
void TestStudyInPink::tc_1087() {
    cout << "----- Testcase 87 -----" << endl;
    Position pos = Position(2, 4);
    pos.setRow(3);
    cout << pos.r << "-" << pos.c;
}

// void setCol (int c)
void TestStudyInPink::tc_1088() {
    cout << "----- Testcase 88 -----" << endl;
    Position pos = Position("(3, 5)");
    pos.setCol(1);
    cout << pos.r << "-" << pos.c;
}

// void setCol (int c)
void TestStudyInPink::tc_1089() {
    cout << "----- Testcase 89 -----" << endl;
    Position pos = Position(2, 4);
    pos.setCol(1);
    cout << pos.r << "-" << pos.c;
}

// bool isEqual (int in_r , int in_c ) const
// trùng nhau
void TestStudyInPink::tc_1090() {
    cout << "----- Testcase 90 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.isEqual(2, 4);
}

// khác nhau về r
void TestStudyInPink::tc_1091() {
    cout << "----- Testcase 91 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.isEqual(4, 4);
}

// khác nhau về c
void TestStudyInPink::tc_1092() {
    cout << "----- Testcase 92 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.isEqual(2, 5);
}

// khác nhau về r và khác nhau về c
void TestStudyInPink::tc_1093() {
    cout << "----- Testcase 93 -----" << endl;
    Position pos = Position(2, 4);
    cout << pos.isEqual(4, 5);
}

// Dùng class TestStudyInPink
// "Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void TestStudyInPink::tc_1104() {
    cout << "----- Testcase 104 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(1, 2), map, 100, 250);
    cout << sherlock->hp << endl;
    cout << sherlock->exp << endl;
    cout << sherlock->moving_rule;
    cout << sherlock->pos.str();

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô Wall
void TestStudyInPink::tc_1105() {
    cout << "----- Testcase 105 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(2, 1), map, 100, 250);
    cout << sherlock->hp << endl;
    cout << sherlock->exp << endl;
    cout << sherlock->moving_rule;
    cout << sherlock->pos.str();

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void TestStudyInPink::tc_1106() {
    cout << "----- Testcase 106 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(3, 2), map, 100, 250);
    cout << sherlock->hp << endl;
    cout << sherlock->exp << endl;
    cout << sherlock->moving_rule;
    cout << sherlock->pos.str();

    delete map;
    delete sherlock;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void TestStudyInPink::tc_1107() {
    cout << "----- Testcase 107 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(4, 1), map, 100, 250);
    cout << sherlock->hp << endl;
    cout << sherlock->exp << endl;
    cout << sherlock->moving_rule;
    cout << sherlock->pos.str();

    delete map;
    delete sherlock;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void TestStudyInPink::tc_1108() {
    cout << "----- Testcase 108 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(1, 4), map, 100, 250);
    cout << sherlock->hp << endl;
    cout << sherlock->exp << endl;
    cout << sherlock->moving_rule;
    cout << sherlock->pos.str();

    delete map;
    delete sherlock;
}

// Dùng class TestStudyInPink
// "Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void TestStudyInPink::tc_1126() {
    cout << "----- Testcase 126 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(0, 1), map, 100, 250);
    cout << watson->hp << endl;
    cout << watson->exp << endl;
    cout << watson->moving_rule;
    cout << watson->pos.str();

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô Wall
void TestStudyInPink::tc_1127() {
    cout << "----- Testcase 127 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
    cout << watson->hp << endl;
    cout << watson->exp << endl;
    cout << watson->moving_rule;
    cout << watson->pos.str();

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và có thể đến được
void TestStudyInPink::tc_1128() {
    cout << "----- Testcase 128 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "DR", Position(3, 2), map, 100, 500);
    cout << watson->hp << endl;
    cout << watson->exp << endl;
    cout << watson->moving_rule;
    cout << watson->pos.str();

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và không thể đến được
void TestStudyInPink::tc_1129() {
    cout << "----- Testcase 129 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "DR", Position(0, 2), map, 100, 500);
    cout << watson->hp << endl;
    cout << watson->exp << endl;
    cout << watson->moving_rule;
    cout << watson->pos.str();

    delete map;
    delete watson;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void TestStudyInPink::tc_1130() {
    cout << "----- Testcase 130 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
    cout << watson->hp << endl;
    cout << watson->exp << endl;
    cout << watson->moving_rule;
    cout << watson->pos.str();

    delete map;
    delete watson;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void TestStudyInPink::tc_1131() {
    cout << "----- Testcase 131 -----" << endl;
    int num_walls = 8;
    Position arr_walls[] = {Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

    Map * map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(1, "LUR", Position(0, 0), map, 100, 250);
    cout << watson->hp << endl;
    cout << watson->exp << endl;
    cout << watson->moving_rule;
    cout << watson->pos.str();

    delete map;
    delete watson;
}

// Dùng class TestStudyInPink
// "Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void TestStudyInPink::tc_1148() {
    cout << "----- Testcase 148 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô Wall
void TestStudyInPink::tc_1149() {
    cout << "----- Testcase 149 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void TestStudyInPink::tc_1150() {
    cout << "----- Testcase 150 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "URL", Position(6, 0), map, 100, 250);
    Watson * watson = new Watson(2, "URL", Position(6, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void TestStudyInPink::tc_1151() {
    cout << "----- Testcase 151 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void TestStudyInPink::tc_1152() {
    cout << "----- Testcase 152 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// Dùng class TestStudyInPink
// "có 1 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó có thể đi đến được"
void TestStudyInPink::tc_1163() {
    cout << "----- Testcase 163 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(0, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// "có 1 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó không đi đến được"
void TestStudyInPink::tc_1164() {
    cout << "----- Testcase 164 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 3;
    Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// "có 2 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó có thể đi đến được"
void TestStudyInPink::tc_1165() {
    cout << "----- Testcase 165 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(3, 0), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(3, 6), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// "có 2 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó không thể đi đến được"
void TestStudyInPink::tc_1166() {
    cout << "----- Testcase 166 -----" << endl;
    int num_walls = 14;
    Position arr_walls[] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2), Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(1, 3), Position(5, 3)};

    Map * map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "LU", Position(0, 3), map, 100, 250);
    Watson * watson = new Watson(2, "LU", Position(6, 3), map, 100, 250);
    Criminal * criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
    cout << criminal->sherlock->str() << endl;
    cout << criminal->watson->str();

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
}

// ---------------------------------------------------PATH---------------------------------------------------------
// FirstAid-Tạo ra item
void TestStudyInPink::tc_1269() {
    cout << "----- Testcase 269 -----" << endl;
    BaseItem * firstAid = new FirstAid();
    
    delete firstAid;
}

void TestStudyInPink::tc_1270() {
    cout << "----- Testcase 270 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
        
    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    BaseItem * firstAid = new FirstAid();

    cout << firstAid->canUse(criminal, NULL) << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete firstAid;
}

void TestStudyInPink::tc_1271() {
    cout << "----- Testcase 271 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
        
    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    BaseItem * firstAid = new FirstAid();

    cout << firstAid->canUse(sherlock, NULL) << endl;

    delete map;
    delete sherlock;
    delete firstAid;
}

void TestStudyInPink::tc_1272() {
    cout << "----- Testcase 272 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

    BaseItem * firstAid = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(firstAid);

    cout << firstAid->canUse(sherlock, NULL) << endl;

    delete map;
    delete sherlock;
    delete firstAid;
    delete sherlockBag;
}

void TestStudyInPink::tc_1273() {
    cout << "----- Testcase 273 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem * firstAid = new FirstAid();

    cout << firstAid->canUse(watson, NULL) << endl;

    delete map;
    delete watson;
    delete firstAid;
}

void TestStudyInPink::tc_1274() {
    cout << "----- Testcase 274 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem * firstAid = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(firstAid);

    cout << firstAid->canUse(watson, NULL) << endl;

    delete map;
    delete watson;
    delete firstAid;
    delete watsonBag;
}

void TestStudyInPink::tc_1275() {
    cout << "----- Testcase 275 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

    BaseItem * firstAid = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(firstAid);

    firstAid->use(sherlock, NULL);

    delete map;
    delete sherlock;
    delete firstAid;
    delete sherlockBag;
}

void TestStudyInPink::tc_1276() {
    cout << "----- Testcase 276 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem * firstAid = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(firstAid);

    firstAid->use(watson, NULL);

    delete map;
    delete watson;
    delete firstAid;
    delete watsonBag;
}

void TestStudyInPink::tc_1277() {
    cout << "----- Testcase 277 -----" << endl;
    BaseItem * excemptionCard = new ExcemptionCard();
    
    delete excemptionCard;
}

void TestStudyInPink::tc_1278() {
    cout << "----- Testcase 278 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
        
    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    BaseItem * excemptionCard = new ExcemptionCard();

    cout << excemptionCard->canUse(criminal, NULL);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete excemptionCard;
}

void TestStudyInPink::tc_1279() {
    cout << "----- Testcase 279 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
        
    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    BaseItem * excemptionCard = new ExcemptionCard();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(excemptionCard);

    cout << excemptionCard->canUse(sherlock, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete sherlockBag;
    delete excemptionCard;
}

void TestStudyInPink::tc_1280() {
    cout << "----- Testcase 280 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    BaseItem * excemptionCard = new ExcemptionCard();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(excemptionCard);

    cout << excemptionCard->canUse(sherlock, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete sherlockBag;
    delete excemptionCard;
}

void TestStudyInPink::tc_1281() {
    cout << "----- Testcase 281 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    BaseItem * excemptionCard = new ExcemptionCard();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard);

    cout << excemptionCard->canUse(watson, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete watsonBag;
    delete excemptionCard;
}

void TestStudyInPink::tc_1282() {
    cout << "----- Testcase 282 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 157, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    BaseItem * excemptionCard = new ExcemptionCard();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard);

    cout << excemptionCard->canUse(watson, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete watsonBag;
    delete excemptionCard;
}

void TestStudyInPink::tc_1283() {
    cout << "----- Testcase 283 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 301, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(1,3), map, criminal);

    BaseItem * excemptionCard = new ExcemptionCard();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(excemptionCard);

    excemptionCard->use(sherlock, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete sherlockBag;
    delete excemptionCard;
}

void TestStudyInPink::tc_1284() {
    cout << "----- Testcase 284 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 157, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(2,1), map, criminal);

    BaseItem * excemptionCard = new ExcemptionCard();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard);

    excemptionCard->use(watson, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete watsonBag;
    delete excemptionCard;
}

void TestStudyInPink::tc_1285() {
    cout << "----- Testcase 285 -----" << endl;
    BaseItem * passingCard = new PassingCard("all");
    
    delete passingCard;
}

void TestStudyInPink::tc_1286() {
    cout << "----- Testcase 286 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
        
    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    BaseItem * passingCard = new PassingCard("all");

    cout << passingCard->canUse(criminal, NULL);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete passingCard;
}

void TestStudyInPink::tc_1287() {
    cout << "----- Testcase 287 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
        
    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    BaseItem * passingCard = new PassingCard("RobotS");

    passingCard->canUse(sherlock, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete passingCard;
}

void TestStudyInPink::tc_1288() {
    cout << "----- Testcase 288 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 231, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    BaseItem * passingCard = new PassingCard("RobotC");

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(passingCard);

    passingCard->canUse(sherlock, NULL);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete passingCard;
    delete sherlockBag;
}

void TestStudyInPink::tc_1289() {
    cout << "----- Testcase 289 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 253, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    BaseItem * passingCard = new PassingCard("RobotSW");

    passingCard->canUse(watson, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete passingCard;
}

void TestStudyInPink::tc_1290() {
    cout << "----- Testcase 290 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 200, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    BaseItem * passingCard = new PassingCard("aa");

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(passingCard);

    passingCard->canUse(watson, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete passingCard;
    delete watsonBag;
}

void TestStudyInPink::tc_1291() {
    cout << "----- Testcase 291 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 566, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(1,3), map, criminal);

    BaseItem * passingCard = new PassingCard("RobotC");

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(passingCard);

    if (passingCard->canUse(sherlock, robotC) == 1) {
        cout << "Can use" << endl;
        passingCard->use(sherlock, robotC);
    }
    else {
        cout << "Can not use" << endl;
    }

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete passingCard;
    delete sherlockBag;
}

void TestStudyInPink::tc_1292() {
    cout << "----- Testcase 292 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(2,1), map, criminal);

    BaseItem * passingCard = new PassingCard("RobotC");

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(passingCard);

    passingCard->use(watson, robotC);

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete passingCard;
    delete watsonBag;
}

void TestStudyInPink::tc_1293() {
    cout << "----- Testcase 293 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(9, 5), map, criminal);

    PassingCard * passingCard = static_cast<PassingCard *>(robotC->item);
    if (passingCard == NULL) {
        cout << "Item is not PassingCard" << endl;
    }
    else {
        cout << passingCard->challenge << endl;
    }

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
}

void TestStudyInPink::tc_1294() {
    cout << "----- Testcase 294 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(9, 2), map, criminal);

    PassingCard * passingCard = static_cast<PassingCard *>(robotC->item);
    if (passingCard == NULL) {
        cout << "Item is not PassingCard" << endl;
    }
    else {
        cout << passingCard->challenge << endl;
    }

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
}

void TestStudyInPink::tc_1295() {
    cout << "----- Testcase 295 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(3, 9), map, criminal);

    PassingCard * passingCard = static_cast<PassingCard *>(robotC->item);
    if (passingCard == NULL) {
        cout << "Item is not PassingCard" << endl;
    }
    else {
        cout << passingCard->challenge << endl;
    }

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
}

void TestStudyInPink::tc_1296() {
    cout << "----- Testcase 296 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(6, 9), map, criminal);

    PassingCard * passingCard = static_cast<PassingCard *>(robotC->item);
    if (passingCard == NULL) {
        cout << "Item is not PassingCard" << endl;
    }
    else {
        cout << passingCard->challenge << endl;
    }

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
}

void TestStudyInPink::tc_1310() {
    cout << "----- Testcase 310 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void TestStudyInPink::tc_1311() {
    cout << "----- Testcase 311 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseItem * excemptionCard1 = new ExcemptionCard();
    BaseItem * excemptionCard2 = new ExcemptionCard();
    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(firstAid1);
    sherlockBag->insert(firstAid2);
    sherlockBag->insert(excemptionCard1);
    sherlockBag->insert(excemptionCard2);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete firstAid1;
    delete firstAid2;
    delete excemptionCard1;
    delete excemptionCard2;
    delete sherlockBag;
}

void TestStudyInPink::tc_1312() {
    cout << "----- Testcase 312 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    for (int i=0; i<12; i++) {
        BaseItem * magicBook = new MagicBook();
        sherlockBag->insert(magicBook);
    }

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void TestStudyInPink::tc_1313() {
    cout << "----- Testcase 313 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    for (int i=0; i<14; i++) {
        BaseItem * magicBook = new MagicBook();
        sherlockBag->insert(magicBook);
    }

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void TestStudyInPink::tc_1314() {
    cout << "----- Testcase 314 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    for (int i=0; i<30; i++) {
        BaseItem * firstAid = new FirstAid();
        sherlockBag->insert(firstAid);
    }

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void TestStudyInPink::tc_1315() {
    cout << "----- Testcase 315 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->get();

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void TestStudyInPink::tc_1316() {
    cout << "----- Testcase 316 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseItem * passingCard1 = new PassingCard("RobotS");
    BaseItem * passingCard2 = new PassingCard("RobotC");

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    BaseItem * magicBook = new MagicBook();

    sherlockBag->insert(magicBook);
    sherlockBag->insert(passingCard1);
    sherlockBag->insert(passingCard2);

    sherlockBag->get();

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete magicBook;
    delete passingCard1;
    delete passingCard2;
    delete sherlockBag;
}

void TestStudyInPink::tc_1317() {
    cout << "----- Testcase 317 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 120, 300);

    BaseItem * passingCard = new PassingCard("RobotW");
    BaseItem * firstAid = new FirstAid();
    BaseItem * magicBook = new MagicBook();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(passingCard);
    sherlockBag->insert(firstAid);
    sherlockBag->insert(magicBook);


    sherlockBag->get();

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete magicBook;
    delete passingCard;
    delete firstAid;
    delete sherlockBag;
}

void TestStudyInPink::tc_1318() {
    cout << "----- Testcase 318 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();
    BaseItem * magicBook = new MagicBook();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(firstAid1);
    sherlockBag->insert(firstAid2);
    sherlockBag->insert(magicBook);


    sherlockBag->get();

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete firstAid1;
    delete firstAid2;
    delete magicBook;
    delete sherlockBag;
}

void TestStudyInPink::tc_1319() {
    cout << "----- Testcase 319 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->get(MAGIC_BOOK);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete sherlockBag;
}

void TestStudyInPink::tc_1320() {
    cout << "----- Testcase 320 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

    BaseItem * passingCard1 = new PassingCard("RobotS");
    BaseItem * passingCard2 = new PassingCard("RobotC");

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(passingCard1);
    sherlockBag->insert(passingCard2);

    sherlockBag->get(PASSING_CARD);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete passingCard1;
    delete passingCard2;
    delete sherlockBag;
}

void TestStudyInPink::tc_1321() {
    cout << "----- Testcase 321 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 120, 300);

    BaseItem * passingCard = new PassingCard("all");
    BaseItem * firstAid = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(passingCard);
    sherlockBag->insert(firstAid);

    sherlockBag->get(FIRST_AID);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete passingCard;
    delete firstAid;
    delete sherlockBag;
}

void TestStudyInPink::tc_1322() {
    cout << "----- Testcase 322 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * sherlockBag = new SherlockBag(sherlock);

    sherlockBag->insert(firstAid1);
    sherlockBag->insert(firstAid2);

    sherlockBag->get(FIRST_AID);

    cout << sherlockBag->getCount() << endl;

    delete map;
    delete sherlock;
    delete firstAid1;
    delete firstAid2;
    delete sherlockBag;
}


void TestStudyInPink::tc_1336() {
    cout << "----- Testcase 336 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 150, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void TestStudyInPink::tc_1337() {
    cout << "----- Testcase 337 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(firstAid1);
    watsonBag->insert(firstAid2);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete firstAid1;
    delete firstAid2;
    delete watsonBag;
}

void TestStudyInPink::tc_1338() {
    cout << "----- Testcase 338 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    for (int i=0; i<14; i++) {
        BaseItem * firstAid = new FirstAid();
        watsonBag->insert(firstAid);
    }

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void TestStudyInPink::tc_1339() {
    cout << "----- Testcase 339 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    for (int i=0; i<16; i++) {
        BaseItem * firstAid = new FirstAid();
        watsonBag->insert(firstAid);
    }

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void TestStudyInPink::tc_1340() {
    cout << "----- Testcase 340 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    for (int i=0; i<25; i++) {
        BaseItem * firstAid = new FirstAid();
        watsonBag->insert(firstAid);
    }

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void TestStudyInPink::tc_1341() {
    cout << "----- Testcase 341 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    cout << watsonBag->get() << endl;

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void TestStudyInPink::tc_1342() {
    cout << "----- Testcase 342 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * excemptionCard1 = new ExcemptionCard();
    BaseItem * excemptionCard2 = new ExcemptionCard();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard1);
    watsonBag->insert(excemptionCard2);

    watsonBag->get();

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete excemptionCard1;
    delete excemptionCard2;
    delete watsonBag;
}

void TestStudyInPink::tc_1343() {
    cout << "----- Testcase 343 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * excemptionCard = new ExcemptionCard();
    BaseItem * firstAid = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard);
    watsonBag->insert(firstAid);

    watsonBag->get();

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete excemptionCard;
    delete firstAid;
    delete watsonBag;
}

void TestStudyInPink::tc_1344() {
    cout << "----- Testcase 344 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(firstAid1);
    watsonBag->insert(firstAid2);

    watsonBag->get();

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete firstAid1;
    delete firstAid2;
    delete watsonBag;
}

void TestStudyInPink::tc_1345() {
    cout << "----- Testcase 345 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->get(FIRST_AID);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete watsonBag;
}

void TestStudyInPink::tc_1346() {
    cout << "----- Testcase 346 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * excemptionCard1 = new ExcemptionCard();
    BaseItem * excemptionCard2 = new ExcemptionCard();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard1);
    watsonBag->insert(excemptionCard2);

    watsonBag->get(EXCEMPTION_CARD);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete excemptionCard1;
    delete excemptionCard2;
    delete watsonBag;
}

void TestStudyInPink::tc_1347() {
    cout << "----- Testcase 347 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * excemptionCard = new ExcemptionCard();
    BaseItem * firstAid = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(excemptionCard);
    watsonBag->insert(firstAid);

    watsonBag->get(FIRST_AID);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete excemptionCard;
    delete firstAid;
    delete watsonBag;
}

void TestStudyInPink::tc_1348() {
    cout << "----- Testcase 348 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson * watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

    BaseItem * firstAid1 = new FirstAid();
    BaseItem * firstAid2 = new FirstAid();

    BaseBag * watsonBag = new WatsonBag(watson);

    watsonBag->insert(firstAid1);
    watsonBag->insert(firstAid2);

    watsonBag->get(FIRST_AID);

    cout << watsonBag->getCount() << endl;

    delete map;
    delete watson;
    delete firstAid1;
    delete firstAid2;
    delete watsonBag;
}

void TestStudyInPink::tc_1349() {
    cout << "----- Testcase 349 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 420);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    RobotS * robotS = new RobotS(4, Position(1,4), map, criminal, sherlock);

    sherlock->move();

    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotS;
}

void TestStudyInPink::tc_1350() {
    cout << "----- Testcase 350 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 390);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    RobotS * robotS = new RobotS(4, Position(1,4), map, criminal, sherlock);

    sherlock->move();

    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotS;
}

void TestStudyInPink::tc_1351() {
    cout << "----- Testcase 351 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 301, 337);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    RobotW * robotW = new RobotW(4, Position(1,4), map, criminal, watson);

    sherlock->move();

    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotW;
}

void TestStudyInPink::tc_1352() {
    cout << "----- Testcase 352 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 350, 337);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    RobotSW * robotSW = new RobotSW(4, Position(1,4), map, criminal, sherlock, watson);

    sherlock->move();

    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotSW;
}

void TestStudyInPink::tc_1353() {
    cout << "----- Testcase 353 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 200, 337);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 200, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7,9), map, criminal);

    RobotSW * robotSW = new RobotSW(4, Position(1,4), map, criminal, sherlock, watson);

    sherlock->move();

    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotSW;
}

void TestStudyInPink::tc_1354() {
    cout << "----- Testcase 354 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(1, 4), map, criminal);

    sherlock->move();

    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
}

void TestStudyInPink::tc_1355() {
    cout << "----- Testcase 355 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 500);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(1, 4), map, criminal);

    sherlock->move();

    cout << sherlock->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
}

void TestStudyInPink::tc_1356() {
    cout << "----- Testcase 356 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(5, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7, 9), map, criminal);

    RobotS * robotS = new RobotS(4, Position(2, 0), map, criminal, sherlock);

    watson->move();

    cout << watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotS;
}

void TestStudyInPink::tc_1357() {
    cout << "----- Testcase 357 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(5, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 360, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7, 9), map, criminal);

    RobotW * robotW = new RobotW(4, Position(2, 0), map, criminal, watson);

    watson->move();

    cout << watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotW;
}

void TestStudyInPink::tc_1358() {
    cout << "----- Testcase 358 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(5, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 200, 350);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7, 9), map, criminal);

    RobotS * robotS = new RobotS(4, Position(2, 0), map, criminal, sherlock);

    watson->move();

    cout << watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotS;
}

void TestStudyInPink::tc_1359() {
    cout << "----- Testcase 359 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(5, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 200, 650);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7, 9), map, criminal);

    RobotSW * robotSW = new RobotSW(4, Position(2, 0), map, criminal, sherlock, watson);

    watson->move();

    cout << watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotSW;
}

void TestStudyInPink::tc_1360() {
    cout << "----- Testcase 360 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(5, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 100, 650);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(7, 9), map, criminal);

    RobotSW * robotSW = new RobotSW(4, Position(2, 0), map, criminal, sherlock, watson);

    watson->move();

    cout << watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
    delete robotSW;
}

void TestStudyInPink::tc_1361() {
    cout << "----- Testcase 361 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4,5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(5, 0), Position(4,0)};

    Map * map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock * sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

    Watson * watson = new Watson(2, "LU", Position(2, 1), map, 100, 650);

    Criminal * criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    RobotC * robotC = new RobotC(3, Position(2, 0), map, criminal);

    watson->move();

    cout << watson->str() << endl;

    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete robotC;
}
