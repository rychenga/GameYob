#pragma once

#include <ctrcommon/types.hpp>

class GBSPlayer {
public:
    bool gbsMode;
    u8 gbsHeader[0x70];

    u8 gbsNumSongs;
    u16 gbsLoadAddress;
    u16 gbsInitAddress;
    u16 gbsPlayAddress;

    void gbsInit();
    void gbsReadHeader();
    void gbsCheckInput();

private:
    u8 gbsSelectedSong;
    int gbsPlayingSong;

    void gbsRedraw();
    void gbsLoadSong();
};