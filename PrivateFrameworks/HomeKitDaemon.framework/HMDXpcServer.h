/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMDApplicationStateMonitor, HMDBackgroundAppMessageFilter, HMDIDSMessageDispatcher, HMMessageDispatcher, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSUUID, NSXPCListener;

@interface HMDXpcServer : HMMessageDispatcher <NSXPCListenerDelegate, HMMessageReceiver> {
    BOOL _activeHomeKitApps;
    NSObject<OS_dispatch_group> *_activeMessageTracker;
    HMDApplicationStateMonitor *_appMonitor;
    HMDBackgroundAppMessageFilter *_backgroundAppMsgFilter;
    NSMutableSet *_foregroundApps;
    HMMessageDispatcher *_notificationRelayDispatcher;
    HMDIDSMessageDispatcher *_recvDispatcher;
    NSUUID *_uuid;
    NSMutableSet *_xpcClients;
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_xpcWorkQueue;
}

@property BOOL activeHomeKitApps;
@property(retain) NSObject<OS_dispatch_group> * activeMessageTracker;
@property(retain) HMDApplicationStateMonitor * appMonitor;
@property(retain) HMDBackgroundAppMessageFilter * backgroundAppMsgFilter;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSMutableSet * foregroundApps;
@property(readonly) unsigned int hash;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(readonly) NSUUID * messageTargetUUID;
@property(retain) HMMessageDispatcher * notificationRelayDispatcher;
@property(retain) HMDIDSMessageDispatcher * recvDispatcher;
@property(readonly) Class superclass;
@property(retain) NSUUID * uuid;
@property(retain) NSMutableSet * xpcClients;
@property(retain) NSXPCListener * xpcListener;
@property(retain) NSObject<OS_dispatch_queue> * xpcWorkQueue;

- (void).cxx_destruct;
- (void)_handleResumeXPCConnectionRequest:(id)arg1;
- (void)_handleSuspendXPCConnectionRequest:(id)arg1;
- (void)_registerForMessages;
- (BOOL)activeHomeKitApps;
- (id)activeMessageTracker;
- (id)appMonitor;
- (id)backgroundAppMsgFilter;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (id)endPoint;
- (id)foregroundApps;
- (void)handleApplicationRunningInForeground:(BOOL)arg1 pid:(int)arg2;
- (void)handleApplicationStateChanged:(unsigned int)arg1 forPid:(int)arg2;
- (void)handleApplicationSuspended:(int)arg1;
- (id)initWithQueue:(id)arg1 receiveDispatcher:(id)arg2 notificationRelayDispatcher:(id)arg3 messageFilterChain:(id)arg4 registerAsMachService:(BOOL)arg5;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationRelayDispatcher;
- (id)recvDispatcher;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id)arg3;
- (void)reset;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)setActiveHomeKitApps:(BOOL)arg1;
- (void)setActiveMessageTracker:(id)arg1;
- (void)setAppMonitor:(id)arg1;
- (void)setBackgroundAppMsgFilter:(id)arg1;
- (void)setForegroundApps:(id)arg1;
- (void)setNotificationRelayDispatcher:(id)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setXpcClients:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (void)setXpcWorkQueue:(id)arg1;
- (BOOL)start;
- (BOOL)stop;
- (void)trackActiveHomeKitAppsForNewConnection:(BOOL)arg1;
- (void)unregisterForForMessage:(id)arg1 receiver:(id)arg2;
- (id)uuid;
- (id)xpcClients;
- (id)xpcListener;
- (id)xpcWorkQueue;

@end
