// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaFontDatabase.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaFontDatabase::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RFontDatabase*) 0)));
        protoCreated = true;
    }

    
        // primary base class QFontDatabase:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QFontDatabase*>());

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
    
        // conversion for base class QFontDatabase
        REcmaHelper::registerFunction(&engine, proto, getQFontDatabase, "getQFontDatabase");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, families, "families");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RFontDatabase*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RFontDatabase",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaFontDatabase::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFontDatabase(): Did you forget to construct with 'new'?"),
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
            RFontDatabase
                    * cppResult =
                    new
                    RFontDatabase
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFontDatabase(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaFontDatabase::getQFontDatabase(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QFontDatabase* cppResult =
                    qscriptvalue_cast<RFontDatabase*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaFontDatabase::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RFontDatabase"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaFontDatabase::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QFontDatabase");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaFontDatabase::families
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaFontDatabase::families", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFontDatabase::families";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFontDatabase* self = 
                        getSelf("families", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        
               self->families();
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: QFontDatabase::WritingSystem */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QFontDatabase::WritingSystem
                    a0 =
                    (QFontDatabase::WritingSystem)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        
               self->families(a0);
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFontDatabase.families().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaFontDatabase::families", context, engine);
            return result;
        }
         QScriptValue REcmaFontDatabase::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RFontDatabase* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RFontDatabase(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaFontDatabase::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RFontDatabase* self = getSelf("RFontDatabase", context);
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
    RFontDatabase* REcmaFontDatabase::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFontDatabase* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFontDatabase >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFontDatabase.%1(): "
                        "This object is not a RFontDatabase").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RFontDatabase* REcmaFontDatabase::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFontDatabase* selfBase = getSelf(fName, context);
                RFontDatabase* self = dynamic_cast<RFontDatabase*>(selfBase);
                //return REcmaHelper::scriptValueTo<RFontDatabase >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFontDatabase.%1(): "
                    "This object is not a RFontDatabase").arg(fName),
                    context);
            }

            return self;
            


        }
        