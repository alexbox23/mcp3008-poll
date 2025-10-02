// Header for mcp3008-poll.c

#ifndef MCP3008_POLL_H
#define MCP3008_POLL_H

#define ADC_MAX_CHANNELS 8
#define ADC_READ_ERROR -0xffff

// Let this module handle SIGINT.
void register_sig_handler();

// Set an abort for handling SIGINT externally.
void abort_adc(int signum);

// Open an ADC channel and return the file descriptor.
int open_adc(int adc);

// Read an ADC value from the file descriptor. Returns ADC_READ_ERROR on fail.
int read_adc(int fd);

#endif // MCP3008_POLL_H
