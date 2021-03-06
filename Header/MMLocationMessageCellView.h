//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMessageCellView.h"

@class MMCTTextView, MMView, NSImageView, NSView;

__attribute__((visibility("hidden")))
@interface MMLocationMessageCellView : MMMessageCellView
{
    MMView *_containerView;
    NSImageView *_mapImageView;
    MMCTTextView *_titleLabel;
    MMCTTextView *_descriptionLabel;
    NSView *_highlightedMask;
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) NSView *highlightedMask; // @synthesize highlightedMask=_highlightedMask;
@property(retain, nonatomic) MMCTTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMCTTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (id)draggingImage;
- (void)openInGoogleMaps;
- (void)openInQQMaps;
- (void)openInAppleMaps;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggablePasteboardTypes;
- (id)contextMenuCustomItemsForPosition:(unsigned long long)arg1;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (BOOL)allowAddToFavorites;
- (id)_fullStringDescription;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)clickableArea;
- (struct CGRect)bubbleFrame;
- (void)layoutDescriptionLabel;
- (void)layoutTitleLabel;
- (void)layoutMapView;
- (void)layoutContainer;
- (void)setHighlighted:(BOOL)arg1;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

