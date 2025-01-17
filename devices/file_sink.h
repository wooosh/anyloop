#ifndef AYLP_DEVICES_FILE_SINK_H_
#define AYLP_DEVICES_FILE_SINK_H_

#include <stdio.h>

#include "anyloop.h"

struct aylp_file_sink_data {
	// file to sink data to
	FILE *fp;
	// gsl_block_uchar that we will copy pointer to data to
	gsl_block_uchar bytes;
};

// initialize file sink device
int file_sink_init(struct aylp_device *self);

// process file sink device once per loop
int file_sink_process(struct aylp_device *self, struct aylp_state *state);

// close file sink device when loop exits
int file_sink_close(struct aylp_device *self);

#endif

