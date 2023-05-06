#ifndef __ECHATINTERNALMESSAGETYPE__H__
#define __ECHATINTERNALMESSAGETYPE__H__

#include <cstdint>

enum eChatInternalMessageType : uint32_t {
	PLAYER_ADDED_NOTIFICATION = 0,
	PLAYER_REMOVED_NOTIFICATION,
	ADD_FRIEND,
	ADD_BEST_FRIEND,
	ADD_TO_TEAM,
	ADD_BLOCK,
	REMOVE_FRIEND,
	REMOVE_BLOCK,
	REMOVE_FROM_TEAM,
	DELETE_TEAM,
	REPORT,
	PRIVATE_CHAT,
	PRIVATE_CHAT_RESPONSE,
	ANNOUNCEMENT,
	MAIL_COUNT_UPDATE,
	MAIL_SEND_NOTIFY,
	REQUEST_USER_LIST,
	FRIEND_LIST,
	ROUTE_TO_PLAYER,
	TEAM_UPDATE,
	MUTE_UPDATE,
	CREATE_TEAM,
};

#endif  //!__ECHATINTERNALMESSAGETYPE__H__