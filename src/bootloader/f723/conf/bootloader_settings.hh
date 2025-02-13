#include <cstdint>
namespace BootloaderConf
{
static constexpr uint32_t SampleRate = 48000;

constexpr inline uint32_t ReceiveSectorSize = 128 * 1024;

constexpr inline bool DoScramble = false;

// should equal blank_duration in encoder.py which sets the length of the sync tone to signal the end of the wav file
// (not to be confused with options.blank_duration)
constexpr inline float OutroSyncSeconds = 4.f;

struct FskEncoding {
	uint32_t blank;
	uint32_t one;
	uint32_t zero;
};
static constexpr FskEncoding Encoding{16, 8, 4};
}; // namespace BootloaderConf
