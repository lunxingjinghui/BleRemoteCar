#ifndef __PROTOCOL_PARSER_H
#define __PROTOCOL_PARSER_H

#define POTOCAL_HEAD    0xDB    // 协议头
#define POTOCAL_TAIL    0x5A    // 协议尾
#define POTOCAL_LEN     3       // 协议长度


void PotocolParser(void);

#endif  // __PROTOCOL_PARSER_H
