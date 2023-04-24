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


CHANNEL *mmotor_findId(uint8_t id);


CHANNEL *m_channels;
int m_len;




void mmotor_init(CHANNEL *chns, int len) {
	int i;
	m_len = len;
	m_channels = chns;

	// Initiate referenses
	for (i = 0;i<m_len; i++) {
//		chns[i].src = CHANNEL_findId(chns, chns[i].rid);
		chns[i].src.ptr = mmotor_findId(chns[i].src.init);
	}
	
	// Initiate referenses
//	for (i = 0;i<m_len; i++) {
//	  if (m_channels[i].src.init != 0) {
//			m_channels[i].src.ptr   = &m_channels[i + m_channels[i].src.init];
//		}
//	}

}


CHANNEL *mmotor_findId(uint8_t id) {
	int i;

	for(i=0; i<m_len; i++) {
		if (m_channels[i].rid == id)
			return &m_channels[i];
	}

	return NULL;
}

void mmotor_update() {
	int i;
	for (i = 0;i<m_len; i++) {
		CHANNEL_Update(&m_channels[i], 0, 10);
	}
}
