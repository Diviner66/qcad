// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaBlockListener.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaBlockListener::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RBlockListener*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, updateBlocks, "updateBlocks");
            
            REcmaHelper::registerFunction(&engine, proto, clearBlocks, "clearBlocks");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RBlockListener*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RBlockListener",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaBlockListener::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RBlockListener: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaBlockListener::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RBlockListener"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaBlockListener::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaBlockListener::updateBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaBlockListener::updateBlocks", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaBlockListener::updateBlocks";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RBlockListener* self = 
                        getSelf("updateBlocks", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
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
                        return REcmaHelper::throwError("RBlockListener: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateBlocks(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RBlockListener.updateBlocks().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaBlockListener::updateBlocks", context, engine);
            return result;
        }
         QScriptValue
        REcmaBlockListener::clearBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaBlockListener::clearBlocks", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaBlockListener::clearBlocks";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RBlockListener* self = 
                        getSelf("clearBlocks", context);
                  

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
    // return type 'void'
    
               self->clearBlocks();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RBlockListener.clearBlocks().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaBlockListener::clearBlocks", context, engine);
            return result;
        }
         QScriptValue REcmaBlockListener::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RBlockListener* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RBlockListener(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaBlockListener::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RBlockListener* self = getSelf("RBlockListener", context);
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
    RBlockListener* REcmaBlockListener::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RBlockListener* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RBlockListener >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RBlockListener.%1(): "
                        "This object is not a RBlockListener").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RBlockListener* REcmaBlockListener::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RBlockListener* selfBase = getSelf(fName, context);
                RBlockListener* self = dynamic_cast<RBlockListener*>(selfBase);
                //return REcmaHelper::scriptValueTo<RBlockListener >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RBlockListener.%1(): "
                    "This object is not a RBlockListener").arg(fName),
                    context);
            }

            return self;
            


        }
        