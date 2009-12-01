/*
 * ForgetMeNot
 * Copyright (C) 2006  Jim Fowler
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
 
@interface BrowserDocument : NSDocument
{
    id *_currentWebView;
    NSMutableArray *_webViews;
    NSString *_MIMETypeForSaving;
    NSFileWrapper *_fileWrapperToSave;
    id *_dataSourceToSave;
    NSView *fileFormatAccessoryView;
    NSPopUpButton *fileFormatPopUpButton;
    NSTabView *fileFormatInfoTabView;
    BOOL _isSavingWithSavePanel;
    BOOL _shouldOpenWindowBehindFrontmost;
}

+ (BOOL)lastDocumentCouldShowInputFields;
- (id)initWithContentsOfRequest:(id)fp8 frameName:(id)fp12;
- (id)init;
- (id)initWithContentsOfURL:(id)fp8 ofType:(id)fp12;
- (void)dealloc;
- (void)close;
- (BOOL)shouldClose;
- (void)makeWindowControllers;
- (void)removeWindowController:(id)fp8;
- (BOOL)isDocumentEdited;
- (id)browserWindowController;
- (id)dataSourceToSave;
- (BOOL)canSaveAsWebArchive;
- (BOOL)isSavingWebArchive;
- (id)MIMETypeForSaving;
- (id)filenameForSaving;
- (BOOL)isSavingPlainText;
- (void)setFileWrapperToSave:(id)fp8 MIMEType:(id)fp12;
- (void)setDataSourceToSave:(id)fp8;
- (BOOL)saveToURL:(id)fp8 ofType:(id)fp12 forSaveOperation:(int)fp16 error:(id *)fp20;
- (void)saveDocument:(id)fp8;
- (void)saveDocumentAs:(id)fp8;
- (void)saveDocumentTo:(id)fp8;
- (void)document:(id)fp8 didSave:(BOOL)fp12 contextInfo:(void *)fp16;
- (id)allowedFileTypes;
- (void)_updateFileFormatInformationText;
- (void)fileFormatPopUpButtonUpdated:(id)fp8;
- (BOOL)prepareSavePanel:(id)fp8;
- (id)panel:(id)fp8 userEnteredFilename:(id)fp12 confirmed:(BOOL)fp16;
- (id)dataRepresentationOfType:(id)fp8;
- (BOOL)loadDataRepresentation:(id)fp8 ofType:(id)fp12;
- (id)untitledName;
- (id)displayName;
- (id)fileType;
- (void)_nameHasChanged;
- (id)mainWebFrameView;
- (void)showWindows;
- (unsigned int)validModesForFontPanel:(id)fp8;
- (void)changeFont:(id)fp8;
- (void)snapBackToSearchResults:(id)fp8;
- (BOOL)canShowInputFields;
- (BOOL)canUseAddressField;
- (BOOL)canUseSearchField;
- (void)searchWeb:(id)fp8;
- (void)setPageForSnapBackToCurrentPage:(id)fp8;
- (void)snapBackToPage:(id)fp8;
- (id)pageForSnapBack;
- (void)openLocation:(id)fp8;
- (void)goToRequest:(id)fp8 withTabLabel:(id)fp12;
- (id)evaluateJavaScript:(id)fp8;
- (void)goToURL:(id)fp8;
- (void)loadCloneOfView:(id)fp8;
- (id)currentURL;
- (BOOL)canGoHome;
- (void)goHome:(id)fp8;
- (BOOL)hasInitialContents;
- (void)displayInitialContents;
- (void)bugReportSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)reportBugToApple:(id)fp8;
- (void)goToItemInBackOrForwardMenu:(id)fp8;
- (void)_addItem:(id)fp8 toMenu:(id)fp12;
- (id)backListMenuForButton:(id)fp8;
- (id)forwardListMenuForButton:(id)fp8;
- (void)reload:(id)fp8;
- (void)setShouldStartEmpty;
- (void)makeTextLarger:(id)fp8;
- (void)makeTextSmaller:(id)fp8;
- (void)stopLoading:(id)fp8;
- (BOOL)isLoading;
- (id)printInfo;
- (void)setPrintInfo:(id)fp8;
- (void)printWebFrameView:(id)fp8 showingPrintPanel:(BOOL)fp12 useSheet:(BOOL)fp16;
- (id)_selectedFrameView;
- (id)_printingMailingFrameView;
- (void)printShowingPrintPanel:(BOOL)fp8;
- (void)_updateTitleOfPrintMenuItem:(id)fp8;
- (BOOL)canPrint;
- (BOOL)canAddBookmark;
- (id)syndicationURLWithFilter;
- (id)createBookmarkRespectingProvisionalPage:(BOOL)fp8;
- (void)proposeBookmarkRespectingProvisionalPage:(BOOL)fp8;
- (void)proposeBookmarkForProvisionalOrCurrentPage;
- (void)addBookmark:(id)fp8;
- (void)addBookmarkToMenu:(id)fp8;
- (void)proposeBookmarkForCurrentURL;
- (void)clearAllStatus;
- (BOOL)_isDocumentHTML;
- (BOOL)_isDisplayingCompletePage;
- (BOOL)_isDisplayingLoadErrorPage;
- (BOOL)canViewSource;
- (BOOL)canMailPage;
- (BOOL)canMailPageAddress;
- (BOOL)canOpenInDashboard;
- (BOOL)canSave;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (void)viewSource:(id)fp8;
- (id)currentWebView;
- (void)tryMultipleURLs:(id)fp8;
- (BOOL)shouldOpenWindowBehindFrontmost;
- (void)setShouldOpenWindowBehindFrontmost:(BOOL)fp8;
- (id)_mailApplicationPath;
- (BOOL)_mailApplicationAtPath:(id)fp8 supportsKey:(id)fp12;
- (BOOL)_sendMessageEventToMailPath:(id)fp8 eventID:(unsigned long)fp12 directObject:(id)fp16 title:(id)fp20;
- (void)mailPage:(id)fp8;
- (void)_reportLaunchFailureForMailApplicationAtPath:(id)fp8;
- (void)mailPageAddress:(id)fp8;
- (id)webWidgetURLWithParameters:(id)fp8;
- (void)openInDashboard:(id)fp8;
- (id)URLString;
- (void)setURLString:(id)fp8;
- (id)source;
- (id)text;
- (void)clearPageCache;
- (id)pageName;
- (id)createWebViewWithFrameName:(id)fp8;
- (id)createWebView;
- (void)removeWebView:(id)fp8;
- (void)setCurrentWebView:(id)fp8;

@end

@interface WindowController : NSWindowController
{
    NSString *_multiWindowFrameAutosaveName;
    BOOL _autosaveFrame;
    BOOL _lastResizeWasProgrammatic;
}

- (void)dealloc;
- (void)_saveFrameIfAllowed;
- (void)windowDidMove:(id)fp8;
- (void)windowDidResize:(id)fp8;
- (void)_windowWillClose:(id)fp8;
- (BOOL)setMultiWindowFrameAutosaveName:(id)fp8;
- (id)multiWindowFrameAutosaveName;
- (void)_setFrameWithoutAutosaving:(struct _NSRect)fp8 programmatically:(BOOL)fp24;
- (void)setFrameWithoutAutosaving:(struct _NSRect)fp8;
- (void)setFrameProgrammatically:(struct _NSRect)fp8;
- (struct _NSRect)defaultFrame;
- (void)setFrameToDefault;
- (void)_windowDidLoad;
- (void)setFrameAutosaveEnabled:(BOOL)fp8;
- (BOOL)frameAutosaveEnabled;

@end

@interface BrowserWindowController : WindowController
{
    id *locationBar;
    id *favoritesBarView;
    id *tabBarView;
    id *backButton;
    id *forwardButton;
    NSButton *homeButton;
    NSButton *addBookmarkButton;
    NSButton *autoFillButton;
    NSButton *fontSmallerButton;
    NSButton *fontBiggerButton;
    NSButton *stopAndReloadButton;
    id *locationField;
    id *searchField;
    id *toggleBookmarksButton;
    NSTabView *tabSwitcher;
    id *statusBar;
    id *statusStringView;
    id *_favoritesBar;
    id *_toolbarController;
    id *_locationFieldEditor;
    id *_searchFieldEditor;
    id *_completionController;
    id *_searchSuggestionController;
    BOOL _isLoading;
    BOOL _isLoadingCounterpartURLForRSS;
    BOOL _temporaryLocationBar;
    BOOL _editedLocationField;
    BOOL _editedLocationFieldWhileLoading;
    BOOL _editedSearchField;
    BOOL _nextSplitViewResizeIsProgrammatic;
    BOOL _tabBarHiddenByJavaScript;
    BOOL _readyToUpdateKeyboardLoop;
    NSMutableDictionary *_viewFramesForResizing;
    BOOL _favoritesBarShowing;
    BOOL _tabBarShowing;
    BOOL _statusBarShowing;
    BOOL _acceptsGenericIcon;
    NSString *_statusText;
    BOOL _clearStatus;
    BOOL _ellipsizeStatus;
    NSString *_newStatus;
    BOOL _stopAndReloadButtonWillStop;
    BOOL _tabBarInTransition;
    BOOL _parentalControlEnabled;
    NSTabView *_tabSwitcherForGoBack;
    NSTabView *_tabSwitcherForGoForward;
    unsigned int _coalescedUpdateMask;
    BOOL _performingCoalescedUpdates;
    NSURL *_pendingSearchURL;
    BOOL _RSSTransitionSlowMotion;
    id *_RSSTransitionImageView;
    NSTimer *_RSSTransitionTimer;
    double _RSSTransitionStartTime;
    double _RSSTransitionDuration;
    BOOL _mainFrameDidFirstLayout;
    BOOL _startRSSAnimationAfterFirstLayout;
}

+ (int)windowPolicyFromEventModifierFlags:(unsigned int)fp8 requireCommandKey:(BOOL)fp12;
+ (int)windowPolicyFromEventModifierFlags:(unsigned int)fp8;
+ (int)windowPolicyFromCurrentEventRequireCommandKey:(BOOL)fp8;
+ (int)windowPolicyFromCurrentEvent;
+ (int)windowPolicyFromCurrentEventRespectingKeyEquivalents:(BOOL)fp8;
+ (void)reopen;
- (id)browserDocument;
- (id)currentWebView;
- (id)currentBookmarksViewController;
- (id)windowNibName;
- (id)locationField;
- (id)searchField;
- (void)_makeFirstResponder:(id)fp8;
- (void)_makeLocationFieldFirstResponder;
- (void)_makeSearchFieldFirstResponder;
- (BOOL)_searchFieldIsFirstResponder;
- (void)updateSearchSnapBackButton;
- (void)updateSnapBackButtons;
- (void)webViewPageForSnapBackHasChanged:(id)fp8;
- (void)setUpSearchField;
- (BOOL)locationBarIsShowing;
- (void)setUpLocationBar;
- (BOOL)isShowingBookmarks;
- (BOOL)allowBookmarksChanges;
- (BOOL)firstResponderIsDescendantOf:(id)fp8;
- (id)selectedTab;
- (id)mainWebFrameView;
- (BOOL)isShowingBar:(id)fp8;
- (void)updateKeyboardLoop;
- (void)collectViewFramesForResizing;
- (void)getTabLabel:(id *)fp8 andToolTip:(id *)fp12 forWebView:(id)fp16;
- (id)tabLabelForWebView:(id)fp8;
- (void)updateLabelForTab:(id)fp8 evenIfTabBarHidden:(BOOL)fp12;
- (void)updateLabelForTab:(id)fp8;
- (id)setUpTabForWebView:(id)fp8 addToRightSide:(BOOL)fp12;
- (id)setUpTabForWebView:(id)fp8;
- (BOOL)alwaysShowTabBar;
- (struct _NSRect)defaultFrame;
- (BOOL)searchFieldShouldShowGoogleSuggestions;
- (id)completionController;
- (id)searchSuggestionController;
- (void)_preloadImages;
- (void)windowWillLoad;
- (void)windowDidLoad;
- (BOOL)_windowIsFullHeight;
- (struct _NSRect)adjustedFrameForSaving:(struct _NSRect)fp8;
- (struct _NSRect)adjustedFrameForCascade:(struct _NSRect)fp8 fromWindow:(id)fp24;
- (struct _NSSize)windowWillResize:(id)fp8 toSize:(struct _NSSize)fp12;
- (void)windowDidResize:(id)fp8;
- (void)setDocumentEdited:(BOOL)fp8;
- (void)dealloc;
- (void)setDocument:(id)fp8;
- (void)stopLoading:(id)fp8;
- (void)cancel:(id)fp8;
- (BOOL)windowWillHandleKeyEvent:(id)fp8;
- (id)_computePriorFirstResponder;
- (void)locationTextFieldURLDropped:(id)fp8;
- (id)windowWillReturnFieldEditor:(id)fp8 toObject:(id)fp12;
- (struct _NSSize)bestWindowSizeForBookmarksOutline;
- (struct _NSSize)bestWindowSizeForCurrentPageWithDefaultSize:(struct _NSSize)fp8;
- (struct _NSRect)windowWillUseStandardFrame:(id)fp8 defaultFrame:(struct _NSRect)fp12;
- (id)windowTitleBarURL;
- (id)windowURL;
- (id)locationFieldURL;
- (void)windowShouldGoToURL:(id)fp8;
- (BOOL)windowShouldClose:(id)fp8;
- (void)toggleLocationBarWithoutSavingConfiguration;
- (void)showLocationBarTemporarilyIfHidden;
- (void)makeLocationBarPermanentIfTemporary;
- (void)hideLocationBarIfTemporary;
- (void)selectSearchField:(id)fp8;
- (BOOL)canShowInputFields;
- (BOOL)searchField:(id)fp8 shouldRememberSearchString:(id)fp12;
- (void)setPendingSearchURL:(id)fp8;
- (void)noResponderFor:(SEL)fp8;
- (void)performQuickSearch:(id)fp8;
- (void)webFrameLoadStarted:(id)fp8;
- (void)updateLocationFieldTextNow;
- (void)updateLocationFieldTextSoon;
- (void)updateSecureIcon;
- (void)updateRSSButton;
- (id)createIncomingImageForRSSTransition;
- (void)removeRSSTransitionImageViewAndDisplay:(BOOL)fp8;
- (void)cancelRSSAnimationAfterSpecificInterval;
- (void)cleanUpRSSAnimationAndDisplay:(BOOL)fp8;
- (void)advanceRSSAnimation;
- (void)startRSSAnimationWithSlowMotion:(BOOL)fp8;
- (void)installRSSTransitionImageView;
- (void)goToCounterpartURLForRSSWithSlowMotion:(BOOL)fp8;
- (void)webFrameLoadCommitted:(id)fp8;
- (void)startRSSAnimation;
- (void)startRSSAnimationForFrame:(id)fp8 error:(id)fp12;
- (void)startRSSAnimationAfterSpecificInterval;
- (void)webFrameLoadDidFirstLayout:(id)fp8;
- (void)webFrameLoadFinished:(id)fp8 withError:(id)fp12;
- (void)webFrame:(id)fp8 willPerformClientRedirectToURL:(id)fp12;
- (BOOL)shouldMakeFirstResponder:(id)fp8;
- (void)tryToAutofillPasswords:(id)fp8;
- (id)locationFieldText;
- (void)setLocationFieldText:(id)fp8;
- (void)selectLocationField:(id)fp8;
- (void)tryMultipleURLs:(id)fp8 windowPolicy:(int)fp12;
- (void)goToToolbarLocationWithWindowPolicy:(int)fp8;
- (void)goToToolbarLocation:(id)fp8;
- (BOOL)locationFieldIsEmpty;
- (BOOL)searchFieldIsEmpty;
- (BOOL)locationFieldTextIsCurrentURL;
- (BOOL)locationFieldTextIsLocationFieldURL;
- (BOOL)updateStopAndReloadButtonNow;
- (void)updateStopAndReloadButtonSoon;
- (void)updateToggleBookmarksButton;
- (void)setLoading:(BOOL)fp8;
- (BOOL)isAvailableForForcedLocationUsingWindowPolicy:(int)fp8;
- (void)reloadObeyingLocationField:(id)fp8;
- (void)stopOrReload:(id)fp8;
- (void)updateWindowTitleNow;
- (void)updateWindowTitleSoon;
- (void)windowTitleNeedsUpdate;
- (void)toggleShowBookmarks:(id)fp8;
- (void)newBookmarkFolder:(id)fp8;
- (void)editAddressOfFavorite:(id)fp8;
- (void)editContentsOfFavorite:(id)fp8;
- (void)editTitleOfFavorite:(id)fp8;
- (void)revealFavorite:(id)fp8;
- (void)deleteBookmark:(id)fp8;
- (void)editTitleOfBookmarksCollection:(id)fp8;
- (void)setUpFavoritesBar;
- (void)toggleBar:(id)fp8 withAnimation:(BOOL)fp12 isShowing:(char *)fp16;
- (void)toggleFavoritesBarWithAnimation:(BOOL)fp8;
- (void)toggleFavoritesBar:(id)fp8;
- (void)toggleToolbarIgnoringCurrentEvent:(id)fp8;
- (void)toggleLocationBar:(id)fp8;
- (void)setToolbarsVisible:(BOOL)fp8;
- (BOOL)anyToolbarsVisible;
- (void)toggleTabBarWithAnimation:(BOOL)fp8;
- (void)setUpTabBar;
- (void)showTab:(id)fp8;
- (void)showTabAtIndex:(int)fp8;
- (BOOL)moreThanOneTabShowing;
- (void)updateCloseKeyEquivalents;
- (id)createTabWithFrameName:(id)fp8 andShow:(BOOL)fp12 addToRightSide:(BOOL)fp16;
- (id)createTabWithFrameName:(id)fp8;
- (id)createInactiveTabWithFrameName:(id)fp8;
- (id)createTab;
- (id)createInactiveTab;
- (void)newTab:(id)fp8;
- (void)closeTab:(id)fp8;
- (void)closeCurrentTab:(id)fp8;
- (void)closeOtherTabs:(id)fp8;
- (void)closeInactiveTabs:(id)fp8;
- (void)reloadTabsMatchingURLs:(id)fp8;
- (void)tabBarView:(id)fp8 didClickTabViewItem:(id)fp12;
- (void)tabBarView:(id)fp8 didClickCloseButtonForTabViewItem:(id)fp12 mouseDownModifierFlags:(unsigned int)fp16;
- (void)willSelectTabViewItem;
- (void)didSelectTabViewItem;
- (void)tabView:(id)fp8 willSelectTabViewItem:(id)fp12;
- (void)tabView:(id)fp8 didSelectTabViewItem:(id)fp12;
- (void)selectNextTab:(id)fp8;
- (void)selectPreviousTab:(id)fp8;
- (id)findTabForWebView:(id)fp8;
- (void)selectTab:(id)fp8;
- (void)closeTabOrWindow:(id)fp8;
- (void)webViewNameHasChanged:(id)fp8;
- (void)webViewLocationFieldURLHasChanged:(id)fp8;
- (void)webViewLocationFieldIconHasChanged:(id)fp8;
- (id)tabBarView:(id)fp8 menuForEvent:(id)fp12;
- (id)tabBarView:(id)fp8 menuForButtonForTabViewItem:(id)fp12 event:(id)fp16;
- (id)tabBarView:(id)fp8 menuForClippedTabViewItems:(id)fp12;
- (void)selectClippedTabViewItem:(id)fp8;
- (void)closeTabFromMenu:(id)fp8;
- (void)closeOtherTabsFromMenu:(id)fp8;
- (void)reloadTab:(id)fp8;
- (void)reloadTabFromMenu:(id)fp8;
- (void)reloadAllTabs:(id)fp8;
- (BOOL)shouldShowTabBar;
- (void)updateTabBarVisibility;
- (void)reloadParentallyRestrictedFrames;
- (void)defaultsDidChange;
- (void)windowDidBecomeKey:(id)fp8;
- (void)fixFocusRingAroundLocationField;
- (void)windowDidResignKey:(id)fp8;
- (BOOL)shouldCloseDocument;
- (id)replaceTabSwitcher:(id)fp8;
- (void)releaseTabSwitcher:(id)fp8;
- (void)releaseTabSwitchersForBackForward;
- (void)replaceTabURLs:(id)fp8 usingTabLabelsFromBookmarks:(id)fp12;
- (void)updateTabLabelForWebView:(id)fp8;
- (void)webViewSheetRequestStatusHasChanged:(id)fp8;
- (void)webViewLoadingStatusHasChanged:(id)fp8;
- (id)orderedTabs;
- (void)tabBarView:(id)fp8 performDragOperationForTabViewItem:(id)fp12 URL:(id)fp16;
- (void)tabBarView:(id)fp8 performDragOperationForURL:(id)fp12 droppedOnRightSide:(BOOL)fp16;
- (void)setUpStatusBar;
- (void)toggleStatusBarWithAnimation:(BOOL)fp8;
- (void)toggleStatusBar:(id)fp8;
- (id)_defaultStatus;
- (void)clearStatus;
- (void)setStatusMessageNow;
- (void)setStatusMessage:(id)fp8 ellipsize:(BOOL)fp12;
- (void)updateStatusMessage;
- (void)webViewStatusMessageHasChanged:(id)fp8;
- (BOOL)isStatusBarVisible;
- (void)setStatusBarVisible:(BOOL)fp8;
- (BOOL)acceptsGenericIcon;
- (void)setAcceptsGenericIcon:(BOOL)fp8;
- (void)updateLocationFieldIconNow;
- (void)updateLocationFieldIconSoon;
- (void)controlTextDidChange:(id)fp8;
- (void)controlTextDidEndEditing:(id)fp8;
- (BOOL)control:(id)fp8 textView:(id)fp12 doCommandBySelector:(SEL)fp16;
- (void)updatePopUpCheckmark:(id)fp8;
- (float)splitView:(id)fp8 constrainMaxCoordinate:(float)fp12 ofSubviewAt:(int)fp16;
- (float)splitView:(id)fp8 constrainMinCoordinate:(float)fp12 ofSubviewAt:(int)fp16;
- (float)rememberCurrentInputFieldWidthRatioForSplitView:(id)fp8;
- (void)splitViewDidResizeSubviews:(id)fp8;
- (void)splitView:(id)fp8 resizeSubviewsWithOldSize:(struct _NSSize)fp12;
- (id)targetForSearch;
- (BOOL)goToBookmarks;
- (void)goBack:(id)fp8;
- (void)goForward:(id)fp8;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)backListMenuForButton:(id)fp8;
- (id)forwardListMenuForButton:(id)fp8;
- (BOOL)canOpenInDashboard;
- (BOOL)canAddBookmark;
- (BOOL)canGoHome;
- (BOOL)canAutoFill;
- (BOOL)canPrintFromToolbar;
- (void)goHome:(id)fp8;
- (void)openInDashboard:(id)fp8;
- (void)addBookmark:(id)fp8;
- (BOOL)canToggleShowSearchField;
- (void)toggleShowGoogleSearch:(id)fp8;
- (BOOL)canReloadObeyingLocationField;
- (BOOL)canReloadTab:(id)fp8;
- (BOOL)canReloadAllTabs;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (BOOL)validateMenuItem:(id)fp8;
- (void)changeTextEncoding:(id)fp8;
- (void)setSearchFieldText:(id)fp8;
- (id)searchFieldText;
- (void)searchForString:(id)fp8;
- (void)chooseSearchString:(id)fp8;
- (void)recentSearchesCleared:(id)fp8;
- (void)textFieldWithControlsPerformRightButtonAction:(id)fp8;
- (void)textFieldWithControlsPerformRightButton2Action:(id)fp8;
- (void)textFieldWithControls:(id)fp8 mouseUpInRightButton:(id)fp12;
- (void)textFieldWithControls:(id)fp8 mouseUpInRightButton2:(id)fp12;
- (id)bookmarkTitleForLocationField:(id)fp8;
- (void)setProgressBarValue:(double)fp8;
- (void)updateProgressBarNow;
- (void)performCoalescedUpdates;
- (void)performCoalescedUpdateSoon:(int)fp8;
- (void)cancelCoalescedUpdate:(int)fp8;
- (void)updateProgressBarSoon;
- (void)updateProgressBar:(BOOL)fp8;
- (void)showCompleteProgressBarNow;
- (void)showCompleteProgressBarSoon;
- (void)clearProgressBar;
- (void)webViewProgressFinished:(id)fp8;
- (void)tellUserThatAppIsHosed;
- (void)showWindow:(id)fp8;
- (void)makeTextLarger:(id)fp8;
- (void)makeTextSmaller:(id)fp8;
- (void)reportBugToApple:(id)fp8;
- (void)printFromToolbar:(id)fp8;
- (void)autoFill:(id)fp8;

@end

@interface AppController : NSObject
{
    NSMenu *historyMenu;
    NSMenuItem *bookmarksMenuItem;
    NSMenuItem *viewMenuItem;
    NSMenuItem *textEncodingMenuItem;
    NSMenuItem *oldViewMenuItem;
    NSMenuItem *oldTextEncodingMenuItem;
    NSMenu *_dockMenu;
    NSArray *_tabbedBrowsingMenuItems;
    BOOL _webWidgetExistenceTested;
    BOOL _webWidgetExists;
    BOOL _closeKeyEquivalentClosesTab;
    BOOL _textEncodingMenuLoaded;
    int _bookmarksMenuItemIndex;
}

+ (void)initialize;
+ (id)sharedAppController;
+ (id)_settingsDirectoryPath;
- (BOOL)webWidgetExists;
- (BOOL)_computeWebWidgetExists;
- (void)_updateWebWidgetExists;
- (void)awakeFromNib;
- (void)dealloc;
- (void)applicationDidBecomeActive:(id)fp8;
- (BOOL)applicationShouldOpenUntitledFile:(id)fp8;
- (BOOL)applicationOpenUntitledFile:(id)fp8;
- (void)startRendezvousSearchIfNecessary;
- (void)performDelayedLaunchOperations;
- (void)applicationDidFinishLaunching:(id)fp8;
- (void)_savePendingData:(id)fp8;
- (int)applicationShouldTerminate:(id)fp8;
- (void)applicationWillTerminate:(id)fp8;
- (BOOL)application:(id)fp8 openFile:(id)fp12;
- (BOOL)applicationShouldHandleReopen:(id)fp8 hasVisibleWindows:(BOOL)fp12;
- (id)applicationDockMenu:(id)fp8;
- (void)handleURLEvent:(id)fp8 withReplyEvent:(id)fp12;
- (id)settingsDirectoryPath;
- (id)localizedHelpBookName;
- (id)displayNameForURL:(id)fp8 withTitle:(id)fp12;
- (void)confirmSwitchDefaultBrowser;
- (void)showFindPanel:(id)fp8;
- (void)findNext:(id)fp8;
- (void)findPrevious:(id)fp8;
- (void)showActivity:(id)fp8;
- (void)showPreferences:(id)fp8;
- (void)_showResourceFileWithName:(id)fp8 extension:(id)fp12;
- (void)_showHTMLResourceFile:(id)fp8;
- (void)_showRTFResourceFile:(id)fp8;
- (void)showAcknowledgments:(id)fp8;
- (void)showLicense:(id)fp8;
- (void)showShortcuts:(id)fp8;
- (void)showReleaseNotes:(id)fp8;
- (void)showPlugins:(id)fp8;
- (void)showDownloads:(id)fp8;
- (void)removeAllCredentials;
- (void)deleteAllCookies;
- (void)confirmResetSafari:(id)fp8;
- (void)emptyCache;
- (void)confirmEmptyCache:(id)fp8;
- (void)confirmEnableStealthMode;
- (void)togglePrivateBrowsing:(id)fp8;
- (id)safariMenu;
- (id)fileMenu;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (void)_updateTextEncodingMenu;
- (void)menuNeedsUpdate:(id)fp8;
- (void)resetTextEncodingMenu;
- (void)toggleJavaScriptCanNotOpenWindows:(id)fp8;
- (void)setCloseKeyEquivalentClosesTab:(BOOL)fp8;
- (id)_parentalControlsAuthorizationWithFlags:(unsigned long)fp8;
- (BOOL)_authorizeParent;
- (BOOL)authorizeParent;
- (BOOL)setParentalControlsEnabled:(BOOL)fp8;
- (void)application:(id)fp8 runTest:(unsigned int)fp12 duration:(double)fp16;

@end

@interface ButtonPlus : NSButton
{
    unsigned int _lastMouseDownModifierFlags;
}

- (void)mouseDown:(id)fp8;
- (unsigned int)lastMouseDownModifierFlags;
- (void)rightMouseDown:(id)fp8;

@end

@interface RolloverTrackingButton : ButtonPlus
{
    BOOL _mouseOver;
    BOOL _redrawOnMouseEnteredAndExited;
    BOOL _trackingRectUpdatePending;
    int _trackingRectTag;
    id delegate;
}

- (void)initTrackingRect;
- (id)initWithFrame:(struct _NSRect)fp8;
- (void)setFrameOrigin:(struct _NSPoint)fp8;
- (void)setFrameSize:(struct _NSSize)fp8;
- (void)setFrameRotation:(float)fp8;
- (void)setBoundsOrigin:(struct _NSPoint)fp8;
- (void)setBoundsSize:(struct _NSSize)fp8;
- (void)setBoundsRotation:(float)fp8;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)mouseIsOver;
- (void)mouseEnteredOrExited:(BOOL)fp8;
- (void)setRedrawOnMouseEnteredAndExited:(BOOL)fp8;
- (BOOL)redrawOnMouseEnteredAndExited;
- (void)updateMouseIsOver:(int)fp8;
- (void)removeTrackingRect;
- (void)updateTrackingRect;
- (void)_updateTrackingRectSoon;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)fp8;
- (void)mouseExited:(id)fp8;
- (void)rightMouseDown:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;

@end

@interface SpinningProgressIndicator : NSView
{
    BOOL _delayedStartup;
    BOOL _isSpinning;
    BOOL _backgroundNeedsUpdate;
    unsigned int _lastImageIndex;
    id _delegate;
    NSMutableArray *_images;
}

+ (void)stopSpinningAll;
+ (void)setUpWindowPosing;
- (id)initWithFrame:(struct _NSRect)fp8;
- (void)_addWindowFlushObserver;
- (void)_removeWindowFlushObserver;
- (void)dealloc;
- (void)setFrameOrigin:(struct _NSPoint)fp8;
- (void)windowDidFlush;
- (void)_recompositeImages;
- (void)drawImageAtIndex:(unsigned int)fp8;
- (void)drawRect:(struct _NSRect)fp8;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)startSpinning;
- (void)stopSpinning;
- (BOOL)isSpinning;
- (void)setDelegate:(id)fp8;
- (void)backgroundImageNeedsUpdate;
- (BOOL)heartbeatWithBirthDate:(double)fp8 currentDate:(double)fp16 context:(id)fp24;

@end

@interface RolloverImageButton : RolloverTrackingButton
{
    NSImage *_rolloverImage;
}

- (void)_setAttributes;
- (id)initWithFrame:(struct _NSRect)fp8;
- (void)awakeFromNib;
- (void)dealloc;
- (void)setRolloverImage:(id)fp8;
- (id)rolloverImage;
- (void)drawRect:(struct _NSRect)fp8;

@end

@class TabViewItemWithButton;

@interface TabButton : RolloverTrackingButton
{
    TabViewItemWithButton *_tabViewItem;
    RolloverImageButton *_closeButton;
    SEL _closeAction;
    SpinningProgressIndicator *_progressIndicator;
    NSImageView *_errorIndicator;
    int _leftSeparatorMode;
    int _rightSeparatorMode;
    NSRect _stackingFrame;
    NSImage *_backgroundImage;
    BOOL _initializedFontsAndImages;
}

+ (void)initialize;
+ (void)_loadImages;
+ (id)lightSeparatorLineColor;
+ (id)darkSeparatorLineColor;
+ (id)rolloverColor;
+ (id)bottomColorForFrontTabText;
+ (id)topColorForFrontTabText;
+ (id)bottomColorForBackTabText;
+ (id)topColorForBackTabText;
- (void)_setCloseButtonImages:(BOOL)fp8;
- (id)closeButton;
- (void)_initializeFontsAndImages;
- (id)initWithFrame:(struct _NSRect)fp8 tabViewItem:(id)fp24;
- (void)dealloc;
- (id)_tabBarView;
- (void)_drawSeparatorAtXOrigin:(float)fp8 inRect:(struct _NSRect)fp12 dark:(BOOL)fp28;
- (void)_drawSeparatorsInRect:(struct _NSRect)fp8;
- (void)_drawRolloverColorInRect:(struct _NSRect)fp8;
- (void)_drawWindowBackgroundFromFrame:(struct _NSRect)fp8 operation:(int)fp24;
- (id)_backgroundImage;
- (id)backgroundImageForProgressIndicator:(id)fp8;
- (void)_backgroundImageNeedsUpdate;
- (float)_leftTextMargin;
- (struct _NSRect)_textRect;
- (float)quiescentTextWidth;
- (void)drawRect:(struct _NSRect)fp8;
- (void)viewDidMoveToWindow;
- (void)_updateFrames;
- (void)setStackingFrame:(struct _NSRect)fp8;
- (void)setState:(int)fp8;
- (void)setLeftSeparatorMode:(int)fp8;
- (void)setRightSeparatorMode:(int)fp8;
- (void)setCloseAction:(SEL)fp8;
- (id)tabViewItem;
- (void)closeTab:(id)fp8;
- (unsigned int)lastMouseDownModifierFlagsForCloseButton;
- (id)menuForEvent:(id)fp8;
- (void)mouseDown:(id)fp8;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseEnteredOrExited:(BOOL)fp8;
- (unsigned int)draggingEntered:(id)fp8;
- (BOOL)prepareForDragOperation:(id)fp8;
- (BOOL)performDragOperation:(id)fp8;
- (void)concludeDragOperation:(id)fp8;
- (void)_setNeedsDisplayAfterProgressChange:(float)fp8;
- (void)_startProgressAnimation;
- (void)_stopProgressAnimation;
- (void)_setShowingProgressIndicator:(BOOL)fp8 immediately:(BOOL)fp12;
- (void)setShowingProgressIndicator:(BOOL)fp8;
- (BOOL)isShowingProgressIndicator;
- (void)showSheetRequestIcon:(id)fp8;
- (id)sheetRequestIcon;
- (id)hitTest:(struct _NSPoint)fp8;
- (void)destroy;

@end

@interface TabViewItemWithButton : NSTabViewItem
{
    TabButton *_button;
    NSObject *_delegate;
}

- (void)dealloc;
- (void)setLabel:(id)fp8;
- (void)setButton:(id)fp8;
- (id)button;
- (void)setDelegate:(id)fp8;
- (id)delegate;

@end
