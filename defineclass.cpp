enum Sub
{
    redred,
    flag,
    wall,
    rock,
    water,
    lava,
    grass
};

enum Obj
{
    you,
    sink,
    stop,
    push,
    wa,
    ac,
};

enum Conj
{
    is
};


class Block
{
    public:
    bool lop; // letterorpicture letter = 0, picture = 1
    bool isyou;
    int mode; //Sub=0 or Obj=1 or Conj=2 -1:DNE
    int which; //enum�X�Ӫ��F��
    int  wol; //winorlose win is 0, lose is 1, nothing is 2
    bool pu; //pushstate
    bool snk; //sinkstate
    bool stp; //stoptstate
    int x,y;
};

Block block[10][100];  //10�O��10���A�̦h�@��100�Ӫ���



