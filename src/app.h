#pragma once

#include "mncc.h"
#include "sip.h"

struct app_config {
	struct {
		const char *local_addr;
		int local_port;

		const char *remote_addr;
		int remote_port;
		struct sip_agent agent;
	} sip;

	struct {
		const char *path;
		struct mncc_connection conn;
	} mncc;

	//int use_imsi_as_id;
};

extern struct app_config g_app;

void app_setup(struct app_config *cfg);
void app_mncc_disconnected(struct mncc_connection *conn);