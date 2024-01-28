PORTNAME=	opensmalltalk-vm
PORTVERSION=	202206021410
CATEGORIES=	lang

MAINTAINER=	takeshi.mutoh@gmail.com
COMMENT=	Cross-platform virtual machine for Squeak, Pharo, Cuis, and Newspeak
WWW=		https://opensmalltalk.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	bash:shells/bash \
		v4l_compat>=1.0.20120501:multimedia/v4l_compat
LIB_DEPENDS=	libaudio.so:audio/nas \
		libdbus-1.so:devel/dbus \
		libffi.so:devel/libffi \
		libfreetype.so:print/freetype2 \
		libharfbuzz.so:print/harfbuzz \
		libasound.so:audio/alsa-lib \
		libpulse-simple.so:audio/pulseaudio \
		libv4l2.so:multimedia/libv4l
#RUN_DEPENDS=

USES=		gl gnome pkgconfig xorg iconv
USE_GL=		gl
USE_GNOME=	cairo pango
USE_XORG=	ice sm x11 xext xrender xrandr

USE_GITHUB=	yes
GH_ACCOUNT=	OpenSmalltalk

#LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}
#CONFIGURE_ARGS+=${ICONV_CONFIGURE_ARG}

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400079 || ( ${OSVERSION} >= 1302505 && ${OSVERSION} < 1400000 ))
CFLAGS+=        -Wno-error=int-conversion
.if ${OSVERSION} >= 1400091 || ( ${OSVERSION} >= 1302507 && ${OSVERSION} < 1400000 )
CFLAGS+=        -Wno-error=incompatible-function-pointer-types
.endif
.endif

post-patch:
	${SED} -i -e 's|INSTALLDIR=sqcogspur64linuxht|INSTALLDIR=${STAGEDIR}${PREFIX}|' ${WRKSRC}/building/linux64x64/squeak.cog.spur/build/mvm
	${SED} -i -e 's|$$Rev|$$Rev: ${PORTVERSION} |' ${WRKSRC}/platforms/Cross/vm/sqSCCSVersion.h
	${SED} -i -e 's|$$Date|$$Date: ${PORTVERSION} |' ${WRKSRC}/platforms/Cross/vm/sqSCCSVersion.h

do-build:
	cd ${WRKSRC}/building/linux64x64/squeak.cog.spur/build/ && ./mvm

.include <bsd.port.mk>
