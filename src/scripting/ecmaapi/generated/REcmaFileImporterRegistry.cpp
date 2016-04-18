// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaFileImporterRegistry.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RFileImporter.h"
            
                #include "RFileImporterFactory.h"
            
                #include "RMessageHandler.h"
            
                #include "RProgressHandler.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaFileImporterRegistry::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RFileImporterRegistry*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RFileImporterRegistry*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, registerFileImporter, "registerFileImporter");
            
            REcmaHelper::registerFunction(&engine, &ctor, unregisterFileImporter, "unregisterFileImporter");
            
            REcmaHelper::registerFunction(&engine, &ctor, getFileImporter, "getFileImporter");
            
            REcmaHelper::registerFunction(&engine, &ctor, getFilterStrings, "getFilterStrings");
            
            REcmaHelper::registerFunction(&engine, &ctor, hasFileImporter, "hasFileImporter");
            
            REcmaHelper::registerFunction(&engine, &ctor, getFilterExtensions, "getFilterExtensions");
            
            REcmaHelper::registerFunction(&engine, &ctor, getFilterExtensionPatterns, "getFilterExtensionPatterns");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RFileImporterRegistry",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaFileImporterRegistry::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFileImporterRegistry(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RFileImporterRegistry
                    * cppResult =
                    new
                    RFileImporterRegistry
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFileImporterRegistry(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaFileImporterRegistry::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RFileImporterRegistry"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaFileImporterRegistry::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaFileImporterRegistry::registerFileImporter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaFileImporterRegistry::registerFileImporter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterRegistry::registerFileImporter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RFileImporterFactory * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RFileImporterFactory * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RFileImporterFactory >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RFileImporterRegistry: Argument 0 is not of type RFileImporterFactory *RFileImporterFactory *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RFileImporterRegistry::
       registerFileImporter(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterRegistry.registerFileImporter().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaFileImporterRegistry::registerFileImporter", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileImporterRegistry::unregisterFileImporter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaFileImporterRegistry::unregisterFileImporter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterRegistry::unregisterFileImporter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RFileImporterFactory * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RFileImporterFactory * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RFileImporterFactory >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RFileImporterRegistry: Argument 0 is not of type RFileImporterFactory *RFileImporterFactory *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RFileImporterRegistry::
       unregisterFileImporter(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterRegistry.unregisterFileImporter().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaFileImporterRegistry::unregisterFileImporter", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileImporterRegistry::getFileImporter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaFileImporterRegistry::getFileImporter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterRegistry::getFileImporter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RDocument */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument is reference
                    RDocument*
                    ap2 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RFileImporterRegistry: Argument 2 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a2 = *ap2;
                
    // end of arguments

    // call C++ function:
    // return type 'RFileImporter *'
    RFileImporter * cppResult =
        RFileImporterRegistry::
       getFileImporter(a0
        ,
    a1
        ,
    a2);
        // return type: RFileImporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    4 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RDocument */
     && (
            context->argument(3).isVariant() || 
            context->argument(3).isQObject() || 
            context->argument(3).isNull()
        ) /* type: RMessageHandler * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument is reference
                    RDocument*
                    ap2 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RFileImporterRegistry: Argument 2 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a2 = *ap2;
                
                    // argument is pointer
                    RMessageHandler * a3 = NULL;

                    a3 = 
                        REcmaHelper::scriptValueTo<RMessageHandler >(
                            context->argument(3)
                        );
                    
                    if (a3==NULL && 
                        !context->argument(3).isNull()) {
                        return REcmaHelper::throwError("RFileImporterRegistry: Argument 3 is not of type RMessageHandler *RMessageHandler *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'RFileImporter *'
    RFileImporter * cppResult =
        RFileImporterRegistry::
       getFileImporter(a0
        ,
    a1
        ,
    a2
        ,
    a3);
        // return type: RFileImporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    5 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RDocument */
     && (
            context->argument(3).isVariant() || 
            context->argument(3).isQObject() || 
            context->argument(3).isNull()
        ) /* type: RMessageHandler * */
     && (
            context->argument(4).isVariant() || 
            context->argument(4).isQObject() || 
            context->argument(4).isNull()
        ) /* type: RProgressHandler * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument is reference
                    RDocument*
                    ap2 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RFileImporterRegistry: Argument 2 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a2 = *ap2;
                
                    // argument is pointer
                    RMessageHandler * a3 = NULL;

                    a3 = 
                        REcmaHelper::scriptValueTo<RMessageHandler >(
                            context->argument(3)
                        );
                    
                    if (a3==NULL && 
                        !context->argument(3).isNull()) {
                        return REcmaHelper::throwError("RFileImporterRegistry: Argument 3 is not of type RMessageHandler *RMessageHandler *.", context);                    
                    }
                
                    // argument is pointer
                    RProgressHandler * a4 = NULL;

                    a4 = 
                        REcmaHelper::scriptValueTo<RProgressHandler >(
                            context->argument(4)
                        );
                    
                    if (a4==NULL && 
                        !context->argument(4).isNull()) {
                        return REcmaHelper::throwError("RFileImporterRegistry: Argument 4 is not of type RProgressHandler *RProgressHandler *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'RFileImporter *'
    RFileImporter * cppResult =
        RFileImporterRegistry::
       getFileImporter(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4);
        // return type: RFileImporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterRegistry.getFileImporter().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaFileImporterRegistry::getFileImporter", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileImporterRegistry::getFilterStrings
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaFileImporterRegistry::getFilterStrings", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterRegistry::getFilterStrings";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        RFileImporterRegistry::
       getFilterStrings();
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterRegistry.getFilterStrings().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaFileImporterRegistry::getFilterStrings", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileImporterRegistry::hasFileImporter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaFileImporterRegistry::hasFileImporter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterRegistry::hasFileImporter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        RFileImporterRegistry::
       hasFileImporter(a0
        ,
    a1);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterRegistry.hasFileImporter().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaFileImporterRegistry::hasFileImporter", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileImporterRegistry::getFilterExtensions
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaFileImporterRegistry::getFilterExtensions", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterRegistry::getFilterExtensions";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        RFileImporterRegistry::
       getFilterExtensions();
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterRegistry.getFilterExtensions().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaFileImporterRegistry::getFilterExtensions", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileImporterRegistry::getFilterExtensionPatterns
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaFileImporterRegistry::getFilterExtensionPatterns", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterRegistry::getFilterExtensionPatterns";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        RFileImporterRegistry::
       getFilterExtensionPatterns();
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterRegistry.getFilterExtensionPatterns().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaFileImporterRegistry::getFilterExtensionPatterns", context, engine);
            return result;
        }
         QScriptValue REcmaFileImporterRegistry::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RFileImporterRegistry* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RFileImporterRegistry(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaFileImporterRegistry::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RFileImporterRegistry* self = getSelf("RFileImporterRegistry", context);
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
    RFileImporterRegistry* REcmaFileImporterRegistry::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFileImporterRegistry* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFileImporterRegistry >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFileImporterRegistry.%1(): "
                        "This object is not a RFileImporterRegistry").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RFileImporterRegistry* REcmaFileImporterRegistry::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFileImporterRegistry* selfBase = getSelf(fName, context);
                RFileImporterRegistry* self = dynamic_cast<RFileImporterRegistry*>(selfBase);
                //return REcmaHelper::scriptValueTo<RFileImporterRegistry >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFileImporterRegistry.%1(): "
                    "This object is not a RFileImporterRegistry").arg(fName),
                    context);
            }

            return self;
            


        }
        