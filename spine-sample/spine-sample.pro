TEMPLATE = app
DESTDIR=../bin

QT       += core gui quick
LIBS += -L $$PWD/../lib  -lspine-cpp

win32{
	QMAKE_POST_LINK += -mkdir \"../bin/res\" && xcopy \"$$PWD/res\" \"../bin/res\" /s/y
}

linux{
	QMAKE_POST_LINK += -mkdir \"../bin/res\" && cp -rf \"$$PWD/res\" \"../bin/res\"
}

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#CONFIG += c++03
INCLUDEPATH += \
	../spine-cpp/include
	
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp

HEADERS += \
    ../spine-cpp/include/qspine/qspine.h \
    ../spine-cpp/include/spine/Animation.h \
    ../spine-cpp/include/spine/AnimationState.h \
    ../spine-cpp/include/spine/AnimationStateData.h \
    ../spine-cpp/include/spine/Atlas.h \
    ../spine-cpp/include/spine/AtlasAttachmentLoader.h \
    ../spine-cpp/include/spine/Attachment.h \
    ../spine-cpp/include/spine/AttachmentLoader.h \
    ../spine-cpp/include/spine/AttachmentTimeline.h \
    ../spine-cpp/include/spine/AttachmentType.h \
    ../spine-cpp/include/spine/BlendMode.h \
    ../spine-cpp/include/spine/BlockAllocator.h \
    ../spine-cpp/include/spine/Bone.h \
    ../spine-cpp/include/spine/BoneData.h \
    ../spine-cpp/include/spine/BoundingBoxAttachment.h \
    ../spine-cpp/include/spine/ClippingAttachment.h \
    ../spine-cpp/include/spine/Color.h \
    ../spine-cpp/include/spine/ColorTimeline.h \
    ../spine-cpp/include/spine/ConstraintData.h \
    ../spine-cpp/include/spine/ContainerUtil.h \
    ../spine-cpp/include/spine/CurveTimeline.h \
    ../spine-cpp/include/spine/Debug.h \
    ../spine-cpp/include/spine/DeformTimeline.h \
    ../spine-cpp/include/spine/DrawOrderTimeline.h \
    ../spine-cpp/include/spine/Event.h \
    ../spine-cpp/include/spine/EventData.h \
    ../spine-cpp/include/spine/EventTimeline.h \
    ../spine-cpp/include/spine/Extension.h \
    ../spine-cpp/include/spine/HasRendererObject.h \
    ../spine-cpp/include/spine/HashMap.h \
    ../spine-cpp/include/spine/IkConstraint.h \
    ../spine-cpp/include/spine/IkConstraintData.h \
    ../spine-cpp/include/spine/IkConstraintTimeline.h \
    ../spine-cpp/include/spine/Inherit.h \
    ../spine-cpp/include/spine/InheritTimeline.h \
    ../spine-cpp/include/spine/Json.h \
    ../spine-cpp/include/spine/LinkedMesh.h \
    ../spine-cpp/include/spine/Log.h \
    ../spine-cpp/include/spine/MathUtil.h \
    ../spine-cpp/include/spine/MeshAttachment.h \
    ../spine-cpp/include/spine/MixBlend.h \
    ../spine-cpp/include/spine/MixDirection.h \
    ../spine-cpp/include/spine/PathAttachment.h \
    ../spine-cpp/include/spine/PathConstraint.h \
    ../spine-cpp/include/spine/PathConstraintData.h \
    ../spine-cpp/include/spine/PathConstraintMixTimeline.h \
    ../spine-cpp/include/spine/PathConstraintPositionTimeline.h \
    ../spine-cpp/include/spine/PathConstraintSpacingTimeline.h \
    ../spine-cpp/include/spine/Physics.h \
    ../spine-cpp/include/spine/PhysicsConstraint.h \
    ../spine-cpp/include/spine/PhysicsConstraintData.h \
    ../spine-cpp/include/spine/PhysicsConstraintTimeline.h \
    ../spine-cpp/include/spine/PointAttachment.h \
    ../spine-cpp/include/spine/Pool.h \
    ../spine-cpp/include/spine/PositionMode.h \
    ../spine-cpp/include/spine/Property.h \
    ../spine-cpp/include/spine/RTTI.h \
    ../spine-cpp/include/spine/RegionAttachment.h \
    ../spine-cpp/include/spine/RotateMode.h \
    ../spine-cpp/include/spine/RotateTimeline.h \
    ../spine-cpp/include/spine/ScaleTimeline.h \
    ../spine-cpp/include/spine/Sequence.h \
    ../spine-cpp/include/spine/SequenceTimeline.h \
    ../spine-cpp/include/spine/ShearTimeline.h \
    ../spine-cpp/include/spine/Skeleton.h \
    ../spine-cpp/include/spine/SkeletonBinary.h \
    ../spine-cpp/include/spine/SkeletonBounds.h \
    ../spine-cpp/include/spine/SkeletonClipping.h \
    ../spine-cpp/include/spine/SkeletonData.h \
    ../spine-cpp/include/spine/SkeletonJson.h \
    ../spine-cpp/include/spine/SkeletonRenderer.h \
    ../spine-cpp/include/spine/Skin.h \
    ../spine-cpp/include/spine/Slot.h \
    ../spine-cpp/include/spine/SlotData.h \
    ../spine-cpp/include/spine/SpacingMode.h \
    ../spine-cpp/include/spine/SpineObject.h \
    ../spine-cpp/include/spine/SpineString.h \
    ../spine-cpp/include/spine/TextureLoader.h \
    ../spine-cpp/include/spine/TextureRegion.h \
    ../spine-cpp/include/spine/Timeline.h \
    ../spine-cpp/include/spine/TransformConstraint.h \
    ../spine-cpp/include/spine/TransformConstraintData.h \
    ../spine-cpp/include/spine/TransformConstraintTimeline.h \
    ../spine-cpp/include/spine/TranslateTimeline.h \
    ../spine-cpp/include/spine/Triangulator.h \
    ../spine-cpp/include/spine/Updatable.h \
    ../spine-cpp/include/spine/Vector.h \
    ../spine-cpp/include/spine/Version.h \
    ../spine-cpp/include/spine/VertexAttachment.h \
    ../spine-cpp/include/spine/Vertices.h \
    ../spine-cpp/include/spine/dll.h \
    ../spine-cpp/include/spine/spine.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
	windowframe.qrc
