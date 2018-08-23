//
// Created by 李伟 on 2018/8/22.
//

#ifndef PROJ_ANDROID_PARSER_H
#define PROJ_ANDROID_PARSER_H

class Packet {
private:
    int sys_id;
    int buniss_id;
    int version;
    char* buf;
    int buflen;

public:
    Packet();
    ~Packet();
};

class Parser {
public:
    Parser();
    ~Parser();

public:
    int encode(char* buf, int size);
    int decode(char* buf, int size);
};


#endif //PROJ_ANDROID_PARSER_H
