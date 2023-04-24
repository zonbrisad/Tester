/**
 * 
 * @file   mmmotor.c
 * 
 * @brief 
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 * 
 * @license Proprietary
 *
 ********************************************************************
 * 
 */

#include "channel.h"


CHANNEL *m_channels;
int m_len;

mmotor_init(CHANNEL *chns, int len) {
	int i;
	m_len = len;
	m_channels = chns;

	for (i = 0;i<m_len; i++) {
	  if (m_channels[i].src.init != 0) {
			m_channels[i].src.ptr   = &m_channels[i + m_channels[i].src.init];
		}
	}

}




mmotor_update() {
	int i;
	for (i = 0;i<m_len; i++) {
			CHANNEL_Update(&m_channels[i], 0, 10);
	}
}
