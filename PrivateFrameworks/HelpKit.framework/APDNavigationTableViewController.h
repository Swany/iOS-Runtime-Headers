/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class <APDNavigationTableViewControllerDelegate>, APDDataManager, NSMutableArray, NSString, UITableView, UIView;

@interface APDNavigationTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    BOOL _RTL;
    APDDataManager *_dataManager;
    <APDNavigationTableViewControllerDelegate> *_delegate;
    UIView *_tableFooterView;
    UITableView *_tableView;
    NSMutableArray *_tableViewDataArray;
}

@property BOOL RTL;
@property(retain) APDDataManager * dataManager;
@property(copy,readonly) NSString * debugDescription;
@property <APDNavigationTableViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain) UIView * tableFooterView;
@property UITableView * tableView;

- (void).cxx_destruct;
- (BOOL)RTL;
- (id)dataManager;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDataManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRTL:(BOOL)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableFooterView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (BOOL)updateCellSelectionWithScollPosition:(int)arg1 topic:(id)arg2 animated:(BOOL)arg3;
- (void)updateFooterView;
- (void)updateLocalizedStrings;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
