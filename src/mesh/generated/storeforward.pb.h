/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_STOREFORWARD_PB_H_INCLUDED
#define PB_STOREFORWARD_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _StoreAndForward_RequestResponse {
    StoreAndForward_RequestResponse_UNSET = 0,
    StoreAndForward_RequestResponse_ROUTER_ERROR = 1,
    StoreAndForward_RequestResponse_ROUTER_HEARTBEAT = 2,
    StoreAndForward_RequestResponse_ROUTER_PING = 3,
    StoreAndForward_RequestResponse_ROUTER_PONG = 4,
    StoreAndForward_RequestResponse_ROUTER_BUSY = 5,
    StoreAndForward_RequestResponse_CLIENT_ERROR = 101,
    StoreAndForward_RequestResponse_CLIENT_HISTORY = 102,
    StoreAndForward_RequestResponse_CLIENT_STATS = 103,
    StoreAndForward_RequestResponse_CLIENT_PING = 104,
    StoreAndForward_RequestResponse_CLIENT_PONG = 105
} StoreAndForward_RequestResponse;

/* Struct definitions */
typedef struct _StoreAndForward_History {
    uint32_t HistoryMessages;
    uint32_t Window;
} StoreAndForward_History;

typedef struct _StoreAndForward_Statistics {
    uint32_t MessagesTotal;
    uint32_t MessagesSaved;
    uint32_t MessagesMax;
    uint32_t UpTime;
    uint32_t Requests;
    uint32_t RequestsHistory;
    bool Heartbeat;
    uint32_t ReturnMax;
    uint32_t ReturnWindow;
} StoreAndForward_Statistics;

typedef struct _StoreAndForward {
    StoreAndForward_RequestResponse rr;
    bool has_stats;
    StoreAndForward_Statistics stats;
    bool has_history;
    StoreAndForward_History history;
} StoreAndForward;


/* Helper constants for enums */
#define _StoreAndForward_RequestResponse_MIN StoreAndForward_RequestResponse_UNSET
#define _StoreAndForward_RequestResponse_MAX StoreAndForward_RequestResponse_CLIENT_PONG
#define _StoreAndForward_RequestResponse_ARRAYSIZE ((StoreAndForward_RequestResponse)(StoreAndForward_RequestResponse_CLIENT_PONG+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define StoreAndForward_init_default             {_StoreAndForward_RequestResponse_MIN, false, StoreAndForward_Statistics_init_default, false, StoreAndForward_History_init_default}
#define StoreAndForward_Statistics_init_default  {0, 0, 0, 0, 0, 0, 0, 0, 0}
#define StoreAndForward_History_init_default     {0, 0}
#define StoreAndForward_init_zero                {_StoreAndForward_RequestResponse_MIN, false, StoreAndForward_Statistics_init_zero, false, StoreAndForward_History_init_zero}
#define StoreAndForward_Statistics_init_zero     {0, 0, 0, 0, 0, 0, 0, 0, 0}
#define StoreAndForward_History_init_zero        {0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define StoreAndForward_History_HistoryMessages_tag 1
#define StoreAndForward_History_Window_tag       2
#define StoreAndForward_Statistics_MessagesTotal_tag 1
#define StoreAndForward_Statistics_MessagesSaved_tag 2
#define StoreAndForward_Statistics_MessagesMax_tag 3
#define StoreAndForward_Statistics_UpTime_tag    4
#define StoreAndForward_Statistics_Requests_tag  5
#define StoreAndForward_Statistics_RequestsHistory_tag 6
#define StoreAndForward_Statistics_Heartbeat_tag 7
#define StoreAndForward_Statistics_ReturnMax_tag 8
#define StoreAndForward_Statistics_ReturnWindow_tag 9
#define StoreAndForward_rr_tag                   1
#define StoreAndForward_stats_tag                2
#define StoreAndForward_history_tag              3

/* Struct field encoding specification for nanopb */
#define StoreAndForward_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    rr,                1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  stats,             2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  history,           3)
#define StoreAndForward_CALLBACK NULL
#define StoreAndForward_DEFAULT NULL
#define StoreAndForward_stats_MSGTYPE StoreAndForward_Statistics
#define StoreAndForward_history_MSGTYPE StoreAndForward_History

#define StoreAndForward_Statistics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   MessagesTotal,     1) \
X(a, STATIC,   SINGULAR, UINT32,   MessagesSaved,     2) \
X(a, STATIC,   SINGULAR, UINT32,   MessagesMax,       3) \
X(a, STATIC,   SINGULAR, UINT32,   UpTime,            4) \
X(a, STATIC,   SINGULAR, UINT32,   Requests,          5) \
X(a, STATIC,   SINGULAR, UINT32,   RequestsHistory,   6) \
X(a, STATIC,   SINGULAR, BOOL,     Heartbeat,         7) \
X(a, STATIC,   SINGULAR, UINT32,   ReturnMax,         8) \
X(a, STATIC,   SINGULAR, UINT32,   ReturnWindow,      9)
#define StoreAndForward_Statistics_CALLBACK NULL
#define StoreAndForward_Statistics_DEFAULT NULL

#define StoreAndForward_History_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   HistoryMessages,   1) \
X(a, STATIC,   SINGULAR, UINT32,   Window,            2)
#define StoreAndForward_History_CALLBACK NULL
#define StoreAndForward_History_DEFAULT NULL

extern const pb_msgdesc_t StoreAndForward_msg;
extern const pb_msgdesc_t StoreAndForward_Statistics_msg;
extern const pb_msgdesc_t StoreAndForward_History_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define StoreAndForward_fields &StoreAndForward_msg
#define StoreAndForward_Statistics_fields &StoreAndForward_Statistics_msg
#define StoreAndForward_History_fields &StoreAndForward_History_msg

/* Maximum encoded size of messages (where known) */
#define StoreAndForward_size                     68
#define StoreAndForward_Statistics_size          50
#define StoreAndForward_History_size             12

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
