// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaRestrictAngleLength.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSnapRestriction.h"
                 void REcmaRestrictAngleLength::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RRestrictAngleLength*) 0)));
        protoCreated = true;
    }

    
        // primary base class RSnapRestriction:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RSnapRestriction*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RSnapRestriction
        REcmaHelper::registerFunction(&engine, proto, getRSnapRestriction, "getRSnapRestriction");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, restrictSnap, "restrictSnap");
            
            REcmaHelper::registerFunction(&engine, proto, setBaseAngle, "setBaseAngle");
            
            REcmaHelper::registerFunction(&engine, proto, setAngle, "setAngle");
            
            REcmaHelper::registerFunction(&engine, proto, setBaseLength, "setBaseLength");
            
            REcmaHelper::registerFunction(&engine, proto, setLength, "setLength");
            
            REcmaHelper::registerFunction(&engine, proto, setRestrictAngle, "setRestrictAngle");
            
            REcmaHelper::registerFunction(&engine, proto, setRestrictLength, "setRestrictLength");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RRestrictAngleLength*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    ctor.setProperty("None",
    QScriptValue(RRestrictAngleLength::None),
    QScriptValue::ReadOnly);


    ctor.setProperty("Angle",
    QScriptValue(RRestrictAngleLength::Angle),
    QScriptValue::ReadOnly);


    ctor.setProperty("Length",
    QScriptValue(RRestrictAngleLength::Length),
    QScriptValue::ReadOnly);


    ctor.setProperty("AngleLength",
    QScriptValue(RRestrictAngleLength::AngleLength),
    QScriptValue::ReadOnly);


    // enum conversions:
    
    qScriptRegisterMetaType<RRestrictAngleLength::AngleLengthMode>(
        &engine,
        toScriptValueEnumAngleLengthMode,
        fromScriptValueEnumAngleLengthMode,
        ctor.property(QString::fromLatin1("prototype"))
    );

        
    // init class:
    engine.globalObject().setProperty("RRestrictAngleLength",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaRestrictAngleLength::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RRestrictAngleLength(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellRestrictAngleLength
                    * cppResult =
                    new
                    REcmaShellRestrictAngleLength
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
        cppResult->__qtscript_self = result;
    
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RDocumentInterface * */
            
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocumentInterface * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RRestrictAngleLength: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellRestrictAngleLength
                    * cppResult =
                    new
                    REcmaShellRestrictAngleLength
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
        cppResult->__qtscript_self = result;
    
    } else 

    if( context->argumentCount() ==
        5
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RDocumentInterface * */
            
                && (
                
                        context->argument(
                        1
                        ).isNumber()
                ) /* type: double */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: double */
            
                && (
                
                        context->argument(
                        3
                        ).isNumber()
                ) /* type: double */
            
                && (
                
                        context->argument(
                        4
                        ).isNumber()
                ) /* type: double */
            
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocumentInterface * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RRestrictAngleLength: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a4 =
                    (double)
                    
                    context->argument( 4 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellRestrictAngleLength
                    * cppResult =
                    new
                    REcmaShellRestrictAngleLength
                    (
                    a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
        cppResult->__qtscript_self = result;
    
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RRestrictAngleLength(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaRestrictAngleLength::getRSnapRestriction(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSnapRestriction* cppResult =
                    qscriptvalue_cast<RRestrictAngleLength*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaRestrictAngleLength::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RRestrictAngleLength"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaRestrictAngleLength::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RSnapRestriction");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaRestrictAngleLength::restrictSnap
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaRestrictAngleLength::restrictSnap", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRestrictAngleLength::restrictSnap";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRestrictAngleLength* self = 
                        getSelf("restrictSnap", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RRestrictAngleLength: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap1 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RRestrictAngleLength: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->restrictSnap(a0
        ,
    a1);
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRestrictAngleLength.restrictSnap().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaRestrictAngleLength::restrictSnap", context, engine);
            return result;
        }
         QScriptValue
        REcmaRestrictAngleLength::setBaseAngle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaRestrictAngleLength::setBaseAngle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRestrictAngleLength::setBaseAngle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRestrictAngleLength* self = 
                        getSelf("setBaseAngle", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setBaseAngle(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRestrictAngleLength.setBaseAngle().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaRestrictAngleLength::setBaseAngle", context, engine);
            return result;
        }
         QScriptValue
        REcmaRestrictAngleLength::setAngle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaRestrictAngleLength::setAngle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRestrictAngleLength::setAngle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRestrictAngleLength* self = 
                        getSelf("setAngle", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setAngle(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRestrictAngleLength.setAngle().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaRestrictAngleLength::setAngle", context, engine);
            return result;
        }
         QScriptValue
        REcmaRestrictAngleLength::setBaseLength
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaRestrictAngleLength::setBaseLength", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRestrictAngleLength::setBaseLength";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRestrictAngleLength* self = 
                        getSelf("setBaseLength", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setBaseLength(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRestrictAngleLength.setBaseLength().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaRestrictAngleLength::setBaseLength", context, engine);
            return result;
        }
         QScriptValue
        REcmaRestrictAngleLength::setLength
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaRestrictAngleLength::setLength", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRestrictAngleLength::setLength";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRestrictAngleLength* self = 
                        getSelf("setLength", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setLength(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRestrictAngleLength.setLength().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaRestrictAngleLength::setLength", context, engine);
            return result;
        }
         QScriptValue
        REcmaRestrictAngleLength::setRestrictAngle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaRestrictAngleLength::setRestrictAngle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRestrictAngleLength::setRestrictAngle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRestrictAngleLength* self = 
                        getSelf("setRestrictAngle", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setRestrictAngle(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRestrictAngleLength.setRestrictAngle().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaRestrictAngleLength::setRestrictAngle", context, engine);
            return result;
        }
         QScriptValue
        REcmaRestrictAngleLength::setRestrictLength
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaRestrictAngleLength::setRestrictLength", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRestrictAngleLength::setRestrictLength";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRestrictAngleLength* self = 
                        getSelf("setRestrictLength", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setRestrictLength(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRestrictAngleLength.setRestrictLength().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaRestrictAngleLength::setRestrictLength", context, engine);
            return result;
        }
         QScriptValue REcmaRestrictAngleLength::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RRestrictAngleLength* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RRestrictAngleLength(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaRestrictAngleLength::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RRestrictAngleLength* self = getSelf("RRestrictAngleLength", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RRestrictAngleLength* REcmaRestrictAngleLength::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RRestrictAngleLength* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RRestrictAngleLength >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RRestrictAngleLength.%1(): "
                        "This object is not a RRestrictAngleLength").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellRestrictAngleLength* REcmaRestrictAngleLength::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RRestrictAngleLength* selfBase = getSelf(fName, context);
                REcmaShellRestrictAngleLength* self = dynamic_cast<REcmaShellRestrictAngleLength*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellRestrictAngleLength >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RRestrictAngleLength.%1(): "
                    "This object is not a RRestrictAngleLength").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaRestrictAngleLength::toScriptValueEnumAngleLengthMode(QScriptEngine* engine, const RRestrictAngleLength::AngleLengthMode& value)
    
        {
            return QScriptValue(engine, (int)value);
        }
         void REcmaRestrictAngleLength::fromScriptValueEnumAngleLengthMode(const QScriptValue& value, RRestrictAngleLength::AngleLengthMode& out)
    
        {
            out = qvariant_cast<RRestrictAngleLength::AngleLengthMode>(value.toVariant());
        }
        