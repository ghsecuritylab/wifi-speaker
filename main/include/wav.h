#ifndef __WAV_H
#define __WAV_H

#include <integer.h>

typedef struct tWAVEFORMATEX
{
    WORD        wFormatTag;         /* format type */
    WORD        nChannels;          /* number of channels (i.e. mono, stereo...) */
    DWORD       nSamplesPerSec;     /* sample rate */
    DWORD       nAvgBytesPerSec;    /* for buffer estimation */
    WORD        nBlockAlign;        /* block size of data */
    WORD        wBitsPerSample;     /* number of bits per sample of mono data */
    WORD        cbSize;             /* the count in bytes of the size of */
                                    /* extra information (after cbSize) */
    WORD		fillFullStruct;
} WAVEFORMATEX;

typedef struct  WAV_HEADER{
	char                RIFF[4];        // RIFF Header      Magic header
	unsigned long       ChunkSize;      // RIFF Chunk Size
	char                WAVE[4];        // WAVE Header
	char                fmt[4];         // FMT header
	unsigned long       Subchunk1Size;  // Size of the fmt chunk
	unsigned short      AudioFormat;    // Audio format 1=PCM,6=mulaw,7=alaw, 257=IBM Mu-Law, 258=IBM A-Law, 259=ADPCM
	unsigned short      NumOfChan;      // Number of channels 1=Mono 2=Sterio
	unsigned long       SamplesPerSec;  // Sampling Frequency in Hz
	unsigned long       bytesPerSec;    // bytes per second
	unsigned short      blockAlign;     // 2=16-bit mono, 4=16-bit stereo
	unsigned short      bitsPerSample;  // Number of bits per sample
	char                Subchunk2ID[4]; // "data"  string
	unsigned long       Subchunk2Size;  // Sampled data length

}WAVHEADER;

#endif
